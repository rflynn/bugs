<?php
# ex: set ts=2 et:

$Bugs['cassini-huygens-radio'] = array(
  'title' => 'Cassini-Huygens Radio',
  'when' => '?',
  'industry' => 'aerospace',
  'summary' => '',
  'result' => array(
    'communications system would not have worked' => 1,
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => null,
    'dollars-at-risk' => 300e6,
  ),
  'causes' => array(
    'not full disclosure between parties' => 1,
    'inappropriate use of off-the-shelf component' => 1,
    'reviewers missed the problem' => 1,
    'inadequate testing' => 1,
  ),
  'mitigating' => array(
    'lone, persistent hero diagnosed bug in time' => 1,
    'workaround found' => 1,
  ),
  'compounding' => array(
    'simple fix on the ground' => 1,
    'fix not possible while deployed' => 1,
  ),
  'workaround' => <<<EOS
From a variety of proposed fixes, the Cassini team crafted a response plan that centered on reducing the Doppler shift sufficiently to keep the data signal within the recognition range of the receiver. They accomplished this trick by altering the planned trajectory of Cassini. Now, Cassini will be much farther from Titan when Huygens enters its atmosphere. As a result of this geometrical rearrangement, the probe's major deceleration component will be perpendicular to the Huygens-Cassini line of sight rather than mostly along it. This simple change literally sidesteps the Doppler shift problem, as the radio waves coming out perpendicular to Huygens's direction of motion will be neither stretched nor compressed.
EOS
,
  'refs' => array(
    array(
      'title'     => 'Titan Calling',
      'author'    => 'James Oberg',
      'url'       => 'http://spectrum.ieee.org/aerospace/space-flight/titan-calling/0',
    ),
  ),
);

