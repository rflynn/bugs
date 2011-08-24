<?php
# ex: set ts=2 et:

$Bugs['uss-yorktown-div-0'] = array(
  'title' => 'USS Yorktown',
  'when' => 'Sep, 1996',
  'industry' => 'military',
  'summary' => <<<EOS

EOS
,
  'result' => array(
    'complete systems crash' => 1,
    'propulsion system failure' => 1,
    'ship disabled' => 1,
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => null,
    'lives-at-risk' => 400,
    'delay-days' => 2,
  ),
  'causes' => array(
    'lack of defensive design' => 1,
    'inadequate training' => 1,
    'insufficient input validation' => 1,
    'edge case' => 1,
    'divide by zero' => 1,
  ),
  'mitigating' => array(
    'entering non-zero solves problem' => 2,
  ),
  'compounding' => array(
    'multiple occureances' => 2,
  ),
  'correction' => array(
    'additional training' => 2,
    "don't do that" => 2,
  ),
  'refs' => array(
    array(
      'title'     => 'USS Yorktown (CG-48)',
      'subtitle'  => 'Smart ship testbed',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/USS_Yorktown_(CG-48)#Smart_ship_testbed',
    ),
    array(
      'title'     => 'Software glitches leave Navy Smart Ship dead in the water',
      'author'    => 'Gregory Slabodkin',
      'url'       => 'http://web.archive.org/web/20071213201037/http://www.gcn.com/print/17_17/33727-1.html?topic=news',
    ),
    array(
      'title'     => 'Navy: Calibration flaw crashed Yorktown LAN',
      'author'    => 'Gregory Slabodkin',
      'url'       => 'http://gcn.com/articles/1998/11/09/navy-calibration-flaw-crashed-yorktown-lan.aspx?sc_lang=en',
    ),
  ),
);

