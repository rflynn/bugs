<?php

$BugTypes[dirname(__FILE__)] = array(
  'title' => 'Rounding Error',
  'summary' => "Roundoff error is the difference between an approximation of a number used in computation and its exact (correct) value. In certain types of computation, roundoff error can be magnified as any initial errors are carried through one or more intermediate steps.",
  'describe' => array(
    'types' => array('float',),
    'algorithmic' => true,
    'accumulative' => true,
    'numeric' => true,
  ),
  'refs' => array(
    array(
      'title'     => 'Weisstein, Eric W.',
      'author'    => 'RoundOff Error',
      'pub'       => 'MathWorld--A Wolfram Web Resource',
      'url'       => 'http://mathworld.wolfram.com/RoundoffError.html',
    ),
    array(
      'title'     => 'Wilkinson, J. H.',
      'author'    => 'RoundOff Error',
      'reprint'   => 'Rounding Errors in Algebraic Processes. New York: Dover, 1994.',
    ),
    array(
      'title'     => 'Round-off Error',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Round-off_error',
    ),
    array(
      'title'     => 'Disasters due to rounding error',
      'author'    => '',
      'url'       => 'http://www.ma.utexas.edu/users/arbogast/misc/disasters.html',
    ),
  ),
);

