<?php
# ex: set ts=2 et:

$Bugs['gets'] = array(
  'title' => 'Standardization of gets(), strcpy() and scanf()',
  'summary' => "Despite the Morris Worm the year before, ANSI included several known-insecure C library functions in the 1989 ANSI C Standard which became widespread, dooming the software industry to millions of avoidable bugs, crashes and remote security vulnerabilities in the name of ensuring standards-compliance for existing programs.",
  'when' => '1989-present',
  'industry' => 'software',
  'result' => array(
    'Morris Worm' => 1,
    'critical Sendmail vulnerability' => 5,
    'countless bugs, crashes and vulnerabilities' => 2,
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => 100e9,
    'remote-vulnerabilities' => 100e6
  ),
  'causes' => array(
    'unrealistic risk assessment' => 3,
    'lack of a defensive design' => 1,
    'buffer overflow' => 1,
    'insufficient input validation' => 1,
  ),
  'refs' => array(
    array(
      'title'     => 'Morris worm',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Morris_worm',
    ),
    array(
      'title'     => 'Security Development Lifecycle (SDL) Banned Function Calls',
      'author'    => 'Microsoft',
      'url'       => 'http://msdn.microsoft.com/en-us/library/bb288454.aspx',
    ),
    array(
      'title'     => 'C standard library',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/C_standard_library',
    ),
    array(
      'title'     => 'gets()',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Gets',
    ),
    array(
      'title'     => 'Critical Sendmail Vulnerability',
      'author'    => 'Tony Bradley',
      'url'       => 'http://netsecurity.about.com/cs/linuxsecurity/a/aa032203a.htm',
    ),
  ),
);

