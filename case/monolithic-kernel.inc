<?php
# ex: set ts=2 et:

$Bugs['monolithic-kernel'] = array(
  'title' => 'The Monolithic Kernel',
  'when' => '2006-present',
  'industry' => 'software',
  'summary' => "Even in the age of widespread consumer multi-core processors, Operating Systems vendors still maintain monolithic kernels which share memory between the core operating system and untrusted device drivers, enabling an error in any driver or module to compromise the entire system.",
  'result' => array(
    'the software security industry' => null,
    'rootkits' => null,
    'countless vulnerabilities' => null,
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => 500e9
  ),
  'causes' => array(
    'unrealistic risk assessment' => null,
    'premature optimization' => null,
    'performance over stability' => null,
    'deadline pressure' => null,
  ),
  'refs' => array(
    array(
      'title'     => 'Monolithic kernel',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Monolithic_kernel',
    ),
    array(
      'title'     => 'Microkernel',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Microkernel',
    ),
    array(
      'title'     => 'Intel Core (microarchitecture)',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Core_(microarchitecture)',
    ),
  ),
);

