<?php
# ex: set ts=2 et:

$Bugs[basename(__FILE__)] = array(
  'title' => 'PHP Creator Breaks MD5 to Satisfy Static Analyzer',
  'when' => 'Aug 7 15:38:36 2011 UTC',
  'industry' => 'software',
  'summary' => '',
  'result' => array(
  ),
  'causes' => array(
    'only following orders' => null,
    'inadequate testing' => null,
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => null,
  ),
  'mitigating' => array(
  ),
  'compounding' => array(
    'broken unit tests ignored' => null,
  ),
  'refs' => array(
    array(
      'title'     => 'Make static analyzers happy',
      'author'    => 'Rasmus Lerdorf',
      'url'       => 'http://svn.php.net.nyud.net/viewvc/php/php-src/trunk/ext/standard/php_crypt_r.c?r1=313615&r2=314434&pathrev=315218',
    ),
  ),
);

