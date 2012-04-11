<?php
# ex: set ts=2 et:

$Bugs[basename(__FILE__)] = array(
  'title' => 'Vancouver Stock Exchange Rounding Error',
  'when' => '1982-1984',
  'industry' => 'financial',
  'summary' => 'An egregious example of roundoff error is provided by a short-lived index devised at the Vancouver stock exchange (McCullough and Vinod 1999). At its inception in 1982, the index was given a value of 1000.000. After 22 months of recomputing the index and truncating to three decimal places at each change in market value, the index stood at 524.881, despite the fact that its "true" value should have been 1009.811.',
  'explain' => <<<EOS
Every time a stock price changes, which happens 2,800 times on a
average day, a computer recalculates the index to three decimal places.
The mistake was made in calculating the last decimal place. If the index stood
at, say, 540.32567, the computer simply dropped the last two digits, making it
540.325. Instead, it should have rounded off the last digit, making the index
540.326
EOS
,
  'result' => array(
    'index off by 50%(!)' => 1,
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => null,
  ),
  'causes' => array(
    'inadequate research' => 1,
    'inadequate testing' => 1,
    'rounding error' => 1,
  ),
  'mitigating' => array(
  ),
  'correction' => array(
  ),
  'refs' => array(
    array(
      'title'     => 'The Vancouver Stock Exchange Sources',
      'author'    => 'Kevin Quinn',
      'url'       => 'http://www5.in.tum.de/~huckle/Vancouv.pdf',
    ),
    array(
      'title'     => 'The Numerical Reliability of Econometric Software',
      'author'    => 'B.D. McCullough and H.D.Vinod',
      'reprint'   => 'Journal of Economic Literature Vol. XXXVII (June 1999), pp. 633-665',
      'url'       => 'http://mathworld.wolfram.com/RoundoffError.html',
    ),
    array(
      'title'     => 'RoundOff Error',
      'author'    => 'Weisstein, Eric W.',
      'pub'       => 'MathWorld--A Wolfram Web Resource',
      'url'       => 'http://mathworld.wolfram.com/RoundoffError.html',
    ),
    array(
      'title'     => 'Disasters due to rounding error',
      'author'    => '',
      'url'       => 'http://www.ma.utexas.edu/users/arbogast/misc/disasters.html',
    ),
    array(
      'title'     => 'Collection of Software Bugs',
      'author'    => 'Prof. Thomas Huckle',
      'url'       => 'http://www5.in.tum.de/~huckle/bugse.html',
    ),
  ),
);

