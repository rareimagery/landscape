<?php

/**
 * @file
 * Drush commands for SearchAPI.
 *
 * Original file by agentrickard for Palantir.net
 */

/**
 * Implements hook_drush_command().
 */
function search_api_drush_command() {
  $items = array();

  $items['search-api-list'] = array(
    'description' => 'List all search indexes.',
    'examples' => array(
      'drush searchapi-list' => dt('List all search indexes.'),
      'drush sapi-l' => dt('Alias to list all search indexes.'),
    ),
    'aliases' => array('sapi-l'),
  );

  $items['search-api-enable'] = array(
    'description' => 'Enable one or all disabled search_api indexes.',
    'examples' => array(
      'drush searchapi-enable' => dt('Enable all disabled indexes.'),
      'drush sapi-en' => dt('Alias to enable all disabled indexes.'),
      'drush sapi-en 1' => dt('Enable index with the ID !id.', array('!id' => 1)),
    ),
    'arguments' => array(
      'index_id' => dt('The numeric ID or machine name of an index to enable.'),
    ),
    'aliases' => array('sapi-en'),
  );

  $items['search-api-disable'] = array(
    'description' => 'Disable one or all enabled search_api indexes.',
    'examples' => array(
      'drush searchapi-disable' => dt('Disable all enabled indexes.'),
      'drush sapi-dis' => dt('Alias to disable all enabled indexes.'),
      'drush sapi-dis 1' => dt('Disable index with the ID !id.', array('!id' => 1)),
    ),
    'arguments' => array(
      'index_id' => dt('The numeric ID or machine name of an index to disable.'),
    ),
    'aliases' => array('sapi-dis'),
  );

  $items['search-api-status'] = array(
    'description' => 'Show the status of one or all search indexes.',
    'examples' => array(
      'drush searchapi-status' => dt('Show the status of all search indexes.'),
      'drush sapi-s' => dt('Alias to show the status of all search indexes.'),
      'drush sapi-s 1' => dt('Show the status of the search index with the ID !id.', array('!id' => 1)),
      'drush sapi-s default_node_index' => dt('Show the status of the search index with the machine name !name.', array('!name' => 'default_node_index')),
    ),
    'arguments' => array(
      'index_id' => dt('The numeric ID or machine name of an index.'),
    ),
    'aliases' => array('sapi-s'),
  );

  $items['search-api-index'] = array(
    'description' => 'Index items for one or all enabled search_api indexes.',
    'examples' => array(
      'drush searchapi-index' => dt('Index items for all enabled indexes.'),
      'drush sapi-i' => dt('Alias to index items for all enabled indexes.'),
      'drush sapi-i 1' => dt('Index items for the index with the ID !id.', array('!id' => 1)),
      'drush sapi-i default_node_index' => dt('Index items for the index with the machine name !name.', array('!name' => 'default_node_index')),
      'drush sapi-i 1 100' => dt("Index a maximum number of !limit items (index's cron batch size items per batch run) for the index with the ID !id.", array('!limit' => 100, '!id' => 1)),
      'drush sapi-i 1 100 10' => dt("Index a maximum number of !limit items (!batch_size items per batch run) for the index with the ID !id.", array('!limit' => 100, '!batch_size' => 10, '!id' => 1)),
    ),
    'arguments' => array(
      'index_id' => dt('The numeric ID or machine name of an index.'),
      'limit' => dt("The number of items to index (index's cron batch size items per run). Set to 0 to index all items. Defaults to 0 (index all)."),
      'batch_size' => dt("The number of items to index per batch run. Set to 0 to index all items at once. Defaults to the index's cron batch size."),
    ),
    'aliases' => array('sapi-i'),
  );

  $items['search-api-reindex'] = array(
    'description' => 'Force reindexing of one or all search indexes, without clearing existing index data.',
    'examples' => array(
      'drush searchapi-reindex' => dt('Schedule all search indexes for reindexing.'),
      'drush sapi-r' => dt('Alias to schedule all search indexes for reindexing .'),
      'drush sapi-r 1' => dt('Schedule the search index with the ID !id for re-indexing.', array('!id' => 1)),
      'drush sapi-r default_node_index' => dt('Schedule the search index with the machine name !name for re-indexing.', array('!name' => 'default_node_index')),
    ),
    'arguments' => array(
      'index_id' => dt('The numeric ID or machine name of an index.'),
    ),
    'aliases' => array('sapi-r'),
  );

  $items['search-api-clear'] = array(
    'description' => 'Clear one or all search indexes and mark them for re-indexing.',
    'examples' => array(
      'drush searchapi-clear' => dt('Clear all search indexes.'),
      'drush sapi-c' => dt('Alias to clear all search indexes.'),
      'drush sapi-c 1' => dt('Clear the search index with the ID !id.', array('!id' => 1)),
      'drush sapi-c default_node_index' => dt('Clear the search index with the machine name !name.', array('!name' => 'default_node_index')),
    ),
    'arguments' => array(
      'index_id' => dt('The numeric ID or machine name of an index.'),
    ),
    'aliases' => array('sapi-c'),
  );

  $items['search-api-set-index-server'] = array(
    'description' => 'Set the search server used by a given index.',
    'examples' => array(
      'drush search-api-set-index-server default_node_index my_solr_server' => dt('Set the !index index to use the !server server.', array('!index' => 'default_node_index', '!server' => 'my_solr_server')),
      'drush sapi-sis default_node_index my_solr_server' => dt('Alias to set the !index index to use the !server server.', array('!index' => 'default_node_index', '!server' => 'my_solr_server')),
    ),
    'arguments' => array(
      'index_id' => dt('The numeric ID or machine name of an index.'),
      'server_id' => dt('The numeric ID or machine name of a server to set on the index.'),
    ),
    'aliases' => array('sapi-sis'),
  );

  return $items;
}


/**
 * List all search indexes.
 */
function drush_search_api_list() {
  if (search_api_drush_static(__FUNCTION__)) {
    return;
  }
  // See search_api_list_indexes()
  $indexes = search_api_index_load_multiple(FALSE);
  if (empty($indexes)) {
    drush_print(dt('There are no indexes present.'));
    return;
  }
  $rows[] = array(
    dt('Id'),
    dt('Name'),
    dt('Index'),
    dt('Server'),
    dt('Type'),
    dt('Status'),
    dt('Limit'),
  );
  foreach ($indexes as $index) {
    $type = search_api_get_item_type_info($index->item_type);
    $type = isset($type['name']) ? $type['name'] : $index->item_type;
    try {
      $server = $index->server();
      $server = $server ? $server->name : '(' . dt('none') . ')';
    }
    catch (SearchApiException $e) {
      watchdog_exception('search_api', $e);
      $server = '(' . dt('unknown: !server', array('server' => $index->server)) . ')';
    }
    $row = array(
      $index->id,
      $index->name,
      $index->machine_name,
      $server,
      $type,
      $index->enabled ? dt('enabled') : dt('disabled'),
      $index->options['cron_limit'],
    );
    $rows[] = $row;
  }
  drush_print_table($rows);
}

/**
 * Enable index(es).
 *
 * @param string|integer $index_id
 *   The index name or id which should be enabled.
 */
function drush_search_api_enable($index_id = NULL) {
  if (search_api_drush_static(__FUNCTION__)) {
    return;
  }
  $indexes = search_api_drush_get_index($index_id);
  if (empty($indexes)) {
    return;
  }
  foreach ($indexes as $index) {
    $vars = array('!index' => $index->name);
    if (!$index->enabled) {
      drush_log(dt("Enabling index !index and queueing items for indexing.", $vars), 'notice');
      $success = FALSE;
      try {
        if ($success = search_api_index_enable($index->id)) {
          drush_log(dt("The index !index was successfully enabled.", $vars), 'ok');
        }
      }
      catch (SearchApiException $e) {
        drush_log($e->getMessage(), 'error');
      }
      if (!$success) {
        drush_log(dt("Error enabling index !index.", $vars), 'error');
      }
    }
    else {
      drush_log(dt("The index !index is already enabled.", $vars), 'error');
    }
  }
}

/**
 * Disable index(es).
 *
 * @param string|integer $index_id
 *   The index name or id which should be disabled.
 */
function drush_search_api_disable($index_id = NULL) {
  if (search_api_drush_static(__FUNCTION__)) {
    return;
  }
  $indexes = search_api_drush_get_index($index_id);
  if (empty($indexes)) {
    return;
  }
  foreach ($indexes as $index) {
    $vars = array('!index' => $index->name);
    if ($index->enabled) {
      $success = FALSE;
      try {
        if ($success = search_api_index_disable($index->id)) {
          drush_log(dt("The index !index was successfully disabled.", $vars), 'ok');
        }
      }
      catch (SearchApiException $e) {
        drush_log($e->getMessage(), 'error');
      }
      if (!$success) {
        drush_log(dt("Error disabling index !index.", $vars), 'error');
      }
    }
    else {
      drush_log(dt("The index !index is already disabled.", $vars), 'error');
    }
  }
}

/**
 * Display index status.
 */
function drush_search_api_status($index_id = NULL) {
  if (search_api_drush_static(__FUNCTION__)) {
    return;
  }
  $indexes = search_api_drush_get_index($index_id);
  if (empty($indexes)) {
    return;
  }
  // See search_api_index_status()
  $rows = array(array(
    dt('Id'),
    dt('Index'),
    dt('% Complete'),
    dt('Indexed'),
    dt('Total'),
  ));
  foreach ($indexes as $index) {
    $status = search_api_index_status($index);
    $complete = ($status['total'] > 0) ? 100 * round($status['indexed'] / $status['total'], 3) . '%' : '-';
    $row = array(
      $index->id,
      $index->name,
      $complete,
      $status['indexed'],
      $status['total'],
    );
    $rows[] = $row;
  }
  drush_print_table($rows);
}

/**
 * Index items.
 *
 * @param string|integer $index_id
 *   The index name or id for which items should be indexed.
 * @param integer $limit
 *   Maximum number of items to index.
 * @param integer $batch_size
 *   Number of items to index per batch.
 */
function drush_search_api_index($index_id = NULL, $limit = NULL, $batch_size = NULL) {
  if (search_api_drush_static(__FUNCTION__)) {
    return;
  }
  $indexes = search_api_drush_get_index($index_id);
  if (empty($indexes)) {
    return;
  }
  foreach ($indexes as $index) {
    // Get the number of remaing items to index.
    try {
      $datasource = $index->datasource();
    }
    catch (SearchApiException $e) {
      drush_log($e->getMessage(), 'error');
      continue;
    }
    $index_status = $datasource->getIndexStatus($index);
    $remaining = $index_status['total'] - $index_status['indexed'];
    if ($remaining <= 0) {
      drush_log(dt("The index !index is up to date.", array('!index' => $index->name)), 'ok');
      continue;
    }

    // Get the number of items to index per batch run.
    if (!isset($batch_size)) {
      $batch_size = empty($index->options['cron_limit']) ? SEARCH_API_DEFAULT_CRON_LIMIT : $index->options['cron_limit'];
    }
    elseif ($batch_size <= 0) {
      $batch_size = $remaining;
    }

    // Get the number items to index.
    if (!isset($limit) || !is_int($limit += 0) || $limit <= 0) {
      $limit = $remaining;
    }

    drush_log(dt("Indexing a maximum number of !limit items (!batch_size items per batch run) for the index !index.", array('!index' => $index->name, '!limit' => $limit, '!batch_size' => $batch_size)), 'ok');

    // Create the batch.
    if (!_search_api_batch_indexing_create($index, $batch_size, $limit, $remaining, TRUE)) {
      drush_log(dt("Couldn't create a batch, please check the batch size and limit parameters."), 'error');
    }
    else {
      // Launch the batch process.
      drush_backend_batch_process();
    }
  }
}

/**
 * Copy of formal_plural that works with drush as 't' may not be available.
 */
function _search_api_drush_format_plural($count, $singular, $plural, array $args = array(), array $options = array()) {
  $args['@count'] = $count;
  if ($count == 1) {
    return dt($singular, $args, $options);
  }

  // Get the plural index through the gettext formula.
  $index = (function_exists('locale_get_plural')) ? locale_get_plural($count, isset($options['langcode']) ? $options['langcode'] : NULL) : -1;
  // If the index cannot be computed, use the plural as a fallback (which
  // allows for most flexiblity with the replaceable @count value).
  if ($index < 0) {
    return dt($plural, $args, $options);
  }
  else {
    switch ($index) {
      case "0":
        return dt($singular, $args, $options);
      case "1":
        return dt($plural, $args, $options);
      default:
        unset($args['@count']);
        $args['@count[' . $index . ']'] = $count;
        return dt(strtr($plural, array('@count' => '@count[' . $index . ']')), $args, $options);
    }
  }
}

/**
 * Mark for re-indexing.
 */
function drush_search_api_reindex($index_id = NULL) {
  if (search_api_drush_static(__FUNCTION__)) {
    return;
  }
  $indexes = search_api_drush_get_index($index_id);
  if (empty($indexes)) {
    return;
  }
  // See search_api_index_reindex()
  foreach ($indexes as $index) {
    $index->reindex();
    drush_log(dt('!index was successfully marked for re-indexing.', array('!index' => $index->machine_name)), 'ok');
  }
}

/**
 * Clear an index.
 */
function drush_search_api_clear($index_id = NULL) {
  if (search_api_drush_static(__FUNCTION__)) {
    return;
  }
  $indexes = search_api_drush_get_index($index_id);
  if (empty($indexes)) {
    return;
  }
  // See search_api_index_reindex()
  foreach ($indexes as $index) {
    $index->clear();
    drush_log(dt('!index was successfully cleared.', array('!index' => $index->machine_name)), 'ok');
  }
}

/**
 * Set the server for a given index.
 */
function drush_search_api_set_index_server($index_id = NULL, $server_id = NULL) {
  if (search_api_drush_static(__FUNCTION__)) {
    return;
  }
  // Make sure we have parameters to work with.
  if (empty($index_id) || empty($server_id)) {
    drush_log(dt('You must specify both an index and server.'), 'error');
    return;
  }
  // Fetch current index and server data.
  $indexes = search_api_drush_get_index($index_id);
  $servers = search_api_drush_get_server($server_id);
  if (empty($indexes) || empty($servers)) {
    // If the specified index or server can't be found, just return. An
    // appropriate error message should have been printed already.
    return;
  }
  // Set the new server on the index.
  $success = FALSE;
  $index = reset($indexes);
  $server = reset($servers);
  try {
    $success = $index->update(array('server' => $server->machine_name));
  }
  catch (SearchApiException $e) {
    drush_log($e->getMessage(), 'error');
  }
  if ($success === FALSE) {
    drush_log(dt('There was an error setting index !index to use server !server.', array('!index' => $index->name, '!server' => $server->name)), 'error');
  }
  elseif (!$success) {
    drush_log(dt('Index !index was already using server !server.', array('!index' => $index->name, '!server' => $server->name)), 'ok');
  }
  else {
    drush_log(dt('Index !index has been set to use server !server and items have been queued for indexing.', array('!index' => $index->name, '!server' => $server->name)), 'ok');
  }
}

/**
 * Returns an index or all indexes as an array.
 *
 * @param string|int|null $index_id
 *   (optional) The ID or machine name of the index to load. Defaults to
 *   loading all available indexes.
 *
 * @return SearchApiIndex[]
 *   An array of indexes.
 */
function search_api_drush_get_index($index_id = NULL) {
  $ids = isset($index_id) ? array($index_id) : FALSE;
  $indexes = search_api_index_load_multiple($ids);
  if (empty($indexes)) {
    drush_set_error(dt('Invalid index_id or no indexes present. Listing all indexes:'));
    drush_print();
    drush_search_api_list();
  }
  return $indexes;
}

/**
 * Returns a server or all servers as an array.
 *
 * @param string|int|null $server_id
 *   (optional) The ID or machine name of the server to load. Defaults to
 *   loading all available servers.
 *
 * @return SearchApiServer[]
 *   An array of servers.
 */
function search_api_drush_get_server($server_id = NULL) {
  $ids = isset($server_id) ? array($server_id) : FALSE;
  $servers = search_api_server_load_multiple($ids);
  if (empty($servers)) {
    drush_set_error(dt('Invalid server_id or no servers present.'));
    // @todo: Maybe add logic to print table of all servers.
  }
  return $servers;
}

/**
 * Does a static lookup to prevent Drush 4 from running twice.
 *
 * @param string $function
 *   The Drush function being called.
 *
 * @return bool
 *   TRUE if the function was already called in this Drush execution, FALSE
 *   otherwise.
 *
 * @see http://drupal.org/node/704848
 */
function search_api_drush_static($function) {
  static $index = array();
  if (isset($index[$function])) {
    return TRUE;
  }
  $index[$function] = TRUE;
  return FALSE;
}
