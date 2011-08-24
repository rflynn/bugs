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
      'title'     => 'Kernel',
      'subtitle'  => 'Monolithic kernel vs. microkernels',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Kernel_(computer_science)#Monolithic_kernels_vs._microkernels',
    ),
    array(
      'title'     => 'Tanenbaum-Torvalds debate',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Tanenbaum%E2%80%93Torvalds_debate',
    ),
    array(
      'title'     => 'LINUX is obsolete',
      'author'    => 'Andrew Tanenbaum',
      'url'       => 'http://groups.google.com/group/comp.os.minix/browse_thread/thread/c25870d7a41696d2/f447530d082cd95d?tvc=2&pli=1',
    ),
    array(
      'title'     => 'Intel Core (microarchitecture)',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Core_(microarchitecture)',
    ),
  ),
);

