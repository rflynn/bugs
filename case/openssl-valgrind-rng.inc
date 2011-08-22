<?php
# ex: set ts=2 et:

$Bugs['openssl-valgrind-rng'] = array(
  'title' => 'OpenSSL RNG De-initialization to Silence Warning',
  'when' => 'Sep, 2006',
  'industry' => 'software',
  'summary' => 'In order to fix a warning issued by Valgrind, a maintainer of Debian patched OpenSSL and broke the random number generator in the process. The patch was uploaded in September 2006 and made its way into the official release; it was not reported until April 2008. Every key generated with the broken version is compromised (as the "random" numbers were made easily predictable), as is all data encrypted with it, threatening many applications that rely on encryption such as S/MIME, Tor, SSL or TLS protected connections and SSH.',
  'result' => array(
    'millions of encryption vulnerabilities' => 1
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => null,
    'remote-vulnerabilities' => 1e6
  ),
  'causes' => array(
    'overreliance on automation' => 1,
    'only following orders' => 1,
    'insufficient review' => 1,
    'improper testing' => 1,
  ),
  'mitigating' => array(
    'non-trivial to exploit' => 1,
  ),
  'refs' => array(
    array(
      'title'     => 'Debian Security Advisory',
      'subtitle'  => 'DSA-1571-1 openssl -- predictable random number generator',
      'author'    => 'Debian',
      'url'       => 'http://www.debian.org/security/2008/dsa-1571',
    ),
    array(
      'title'     => 'Debian generated SSH-Keys working exploit',
      'author'    => 'Markus Mueller',
      'url'       => 'http://www.securityfocus.com/archive/1/archive/1/492112/100/0/threaded',
    ),
    array(
      'title'     => 'CVE-2008-0166',
      'author'    => 'CVE',
      'url'       => 'http://www.debian.org/security/2008/dsa-1571',
    ),
    array(
      'title'     => 'List of software bugs',
      'subtitle'  => 'Encryption',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/List_of_software_bugs#Encryption',
    ),
  ),
);

