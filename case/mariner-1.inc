<?php
# ex: set ts=2 et:

$Bugs['mariner-1'] = array(
  'title' => 'Mariner-1',
  'when' => 'Jul 22, 1962',
  'industry' => 'aerospace',
  'result' => 'rocket/satellite loss',
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => 18.5e6
  ),
  'causes' => array(
    'transcription error' => 1,
    'deadline pressure' => 1,
    'inadequate testing' => 1
  ),
  'inaccuracies' => 'Although the bug is sometimes claimed to have been an incorrect FORTRAN DO statement, this is not correct. FORTRAN was not in use.',
  'refs' => array(
    array(
      'title'     => 'Mariner 1',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Mariner_1',
    ),
    array(
      'title'     => 'Mariner 1',
      'author'    => 'NASA',
      'url'       => 'http://nssdc.gsfc.nasa.gov/nmc/spacecraftDisplay.do?id=MARIN1',
    ),
    array(
      'title'     => 'Space FAQ - Planetary Probe History',
      'author'    => 'Jon Leech <leech@cs.unc.edu>',
      'url'       => 'http://www.faqs.org/faqs/space/probe/',
    ),
    array(
      'title'     => '20 Famous Software Disasters',
      'pub'       => 'DevTopics.com',
      'url'       => 'http://www.devtopics.com/20-famous-software-disasters/',
    ),
  ),
);

