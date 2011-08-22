<?php
# ex: set ts=2 et:

$Bugs['sony-rootkit'] = array(
  'title' => 'Sony BMG Rootkit',
  'when' => '2005',
  'industry' => 'entertainment',
  'summary' => 'In the face of falling CD sales and increasing online media piracy in the early 2000s Sony purchased, stole and assembled software components into a Microsoft Windows-specific rootkit and installed it on 50 CDs, infecting any Windows system they were inserted',
  'causes' => array(
    'attempting to protect antiquated delivery model' => null,
    'assymetric response to perceived threat' => null,
    'killing the messenger' => null,
  ),
  'result' => array(
    'PR disaster' => 1,
    'product recall' => 1,
    '500,000+ vulnerabilities' => 1,
    'class-action lawsuit' => 2,
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => 5.75e6,
    'remote-vulnerabilities' => 500e3,
  ),
  'compounding' => array(
    'anti-piracy measures only affected legitimate consumers' => null,
    'protection ineffective' => null,
    'created additional vulnerabilities' => null,
    'software license violation' => null,
  ),
  'mitigating' => array(
  ),
  'refs' => array(
    array(
      'title'     => 'Sony BMG copy protection rootkit scandal',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Sony_BMG_copy_protection_rootkit_scandal',
    ),
    array(
      'title'     => 'Sony BMG Litigation Info',
      'author'    => 'Electronic Frontier Foundation',
      'url'       => 'http://www.eff.org/cases/sony-bmg-litigation-info',
    ),
  ),
);

