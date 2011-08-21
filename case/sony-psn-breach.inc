<?php
# ex: set ts=2 et:

$Bugs['sony-psn-breach'] = array(
  'title' => 'PlayStation Network Breach',
  'when' => 'Apr 17, 2011',
  'industry' => 'entertainment',
  'causes' => array(
    'failure to patch known vulnerabilities' => 1,
    'failure to encrypt sensitive data' => null,
  ),
  'result' => array(
    'PR disaster' => null,
    '12.3 million credit card numbers at risk' => null,
    '77 million accounts at risk' => null,
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => 171e6,
    '¥' => 14e9,
    'cc#s' => 12.3e6,
    'accounts' => 77e6,
  ),
  'mitigating' => array(
    'no verifiable reports of credit card fraud' => 1,
  ),
  'refs' => array(
    array(
      'title'     => 'PlayStation Network outage',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/PlayStation_Network_outage',
    ),
    array(
      'title'     => 'Sony Announces Revision of Consolidated Forecast for the Fiscal Year Ended March 31, 2011',
      'author'    => 'Sony',
      'url'       => 'http://www.sony.net/SonyInfo/IR/financial/fr/10revision_sony.pdf',
    ),
  ),
);

