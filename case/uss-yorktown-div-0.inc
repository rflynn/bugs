<?php
# ex: set ts=2 et:

$Bugs['uss-yorktown-div-0'] = array(
  'title' => 'USS Yorktown ',
  'when' => '1996',
  'industry' => 'military',
  'summary' => '',
  'result' => array(
    'propulsion systems failure' => 1,
    'towed back to base' => 2,
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => null,
    'lives-at-risk' => 400,
  ),
  'causes' => array(
    'edge case' => 1,
    'insufficient input validation' => 1,
    'lack of defensive design' => 1,
    'divide by zero' => 1,
  ),
  'mitigating' => array(
    'entering non-zero solves problem' => 2,
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

