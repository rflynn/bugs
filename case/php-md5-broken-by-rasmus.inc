<?php
# ex: set ts=2 et:

$Bugs[basename(__FILE__)] = array(
  'title' => 'PHP MD5 Broken to Satisfy Static Analyzer',
  'when' => 'Aug 7 15:38:36 2011 UTC',
  'industry' => 'software',
  'summary' => '',
  'result' => array(
    'existing software broken' => 2,
  ),
  'causes' => array(
    'only following orders' => null,
    'inadequate testing' => null,
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => null,
    'delay-days' => 7,
    'existing-installations-potentially-broken' => 10e6,
  ),
  'mitigating' => array(
    'reverting error fixes problem' => null,
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
    array(
      'title'     => '5.3.7 upgrade warning',
      'author'    => '',
      'url'       => 'http://www.php.net/archive/2011.php#id2011-08-22-1',
    ),
    array(
      'title'     => 'PHP users warned to stay away from latest update',
      'author'    => 'Dan Goodin',
      'url'       => 'http://www.theregister.co.uk/2011/08/22/php_security_warning/',
    ),
  ),
);

