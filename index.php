<html>
<head>
  <meta http-equiv="content-type" content="text/html; charset=utf-8" />
  <title>Software Engineering Disaster Hall of Fame</title>
  <meta name="author" content="Ryan Flynn" />
  <meta name="description" content="" />
  <meta name="keywords" content="bug, software, programming, disaster, famous, fame, hall, shame" />
  <link rel="stylesheet" href="/css/style.css" type="text/css" media="screen, projection" />
<style>
body {
  font: small Arial, Helvetica, sans-serif;
}
th { background-color: #eee }
th, td {
  border: 1px solid #ccc;
  padding: 0.25em;
}
th { border-color: #fff }
td ul {
  list-style: none;
  margin-bottom: 0;
  font-size: smaller;
  padding-left: 1em;
  text-indent: -1em;
}
td ul li:before {
  content: "\00BB \0020";
}
</style>
</head>

<body>

<h1><img src="/images/icons/bug.gif"> Software Engineering Disaster Hall of Fame</h1>
<h3>Compiled by Ryan Flynn</h3>

<?php

error_reporting(E_ALL);

$cases =
  array_filter(
    scandir('./case/'),
    function ($f)
    {
      return preg_match('/\.inc$/', $f);
    });

foreach ($cases as $case)
{
  $path = "case/$case";
  @include_once($path);
}

function eschtml($str)
{
  return htmlspecialchars($str);
}

function tohtml($v)
{
  if (is_array($v))
  {
    if (count($v) == 1)
    {
      $k = array_keys($v);
      return $k[0];
    }
    $s = '<ul>';
    foreach (array_keys($v) as $k)
      $s .= '<li>' . eschtml($k);
    $s .= '</ul>';
    return $s;
  } else {
    return $v;
  }
}

/*
 * return inflation-adjusted dollar amount based on original cost and age
 * $when can be in the forms: "Jan 1, 2000", "Jan, 2000", "2000", "2000-2001", "2000-present"
 */
function inflation($dollars, $when)
{
  $Now = intval(date('Y'));
  $yr = intval(date('Y'), strtotime(intval($when) ? intval($when) : $when));
  if ($yr == 0)
    $yr = $Now;
  $ageyears = $Now - $yr;
  $factor = pow(1.02, $ageyears);
  return $dollars * $factor;
}

uasort($Bugs,
  function ($a, $b)
  {
    $ac = $a['cost'];
    $bc = $b['cost'];
    $cmp = @$bc['near-thermonuclear-war'] - @$ac['near-thermonuclear-war'];
    if ($cmp)
      return $cmp;
    $cmp = @$bc['deaths'] - @$ac['deaths'];
    if ($cmp)
      return $cmp;
    $cmp = @$bc['injuries'] - @$ac['injuries'];
    if ($cmp)
      return $cmp;
    $cmp = @$bc['lives-at-risk'] - @$ac['lives-at-risk'];
    if ($cmp)
      return $cmp;
    $acost = inflation(@$ac['dollars'], $a['when']);
    $bcost = inflation(@$bc['dollars'], $b['when']);
    if ($acost != $bcost)
      return $acost > $bcost ? -1 : 1;
    $cmp = @$bc['delay-days'] - @$ac['delay-days'];
    if ($cmp)
      return $cmp;
    return @$a['remote-vulnerabilities'] > @$b['remote-vulnerabilities'] ? -1 : 1;
  });

?>

<table style="border-collapse:collapse; border:1px solid #ccc">

<tr>
  <th>Name
  <th>When
  <th>Cost
  <th>Result
  <th>Cause(s)
  <th>Industry
  <th>Mitigating Factors

<?php
  $Year = intval(date('Y'));
  foreach (array_keys($Bugs) as $key)
  {
    $bug = $Bugs[$key];
    $cost = $bug['cost'];
    $ageyears = $Year - intval($bug['when']);
    $inflation = pow(1.02, $ageyears);
?>

<tr>
  <td><a href="<?= eschtml($bug['refs'][0]['url']) ?>"><?= eschtml($bug['title']) ?></a>
  <td><?= eschtml($bug['when']) ?>
  <td align="right">
    <?= $cost['deaths'] ? $cost['deaths'] . ' lives' : '' ?>
    <?= $cost['injuries'] ? $cost['injuries'] . ' injuries' : '' ?>
    <?= @$cost['lives-at-risk'] ? number_format($cost['lives-at-risk']) . ' lives at risk' : '' ?>
    <?= @$cost['delay-days'] ? $cost['delay-days'] . ' day delay' : '' ?>
    <?= $cost['dollars'] ? '$'.number_format($cost['dollars']) :
          ($cost['dollars'] === null && !@$cost['deaths'] && !@$cost['injuries'] && !@$cost['lives-at-risk'] && !@$cost['delay-days'] ? '$unspecified' : '') ?>
    <?= @$cost['£'] ? '£' . number_format($cost['£']) : '' ?>
  <td><?= tohtml($bug['result']) ?>
  <td><?= tohtml($bug['causes']) ?>
  <td><?= eschtml($bug['industry']) ?>
  <td><?= tohtml(@$bug['mitigating']) ?>

<?php
  }
?>

</table>

<h2>References</h2>

<ol>
  <li><a href="http://sunnyday.mit.edu/accidents/space2001.pdf">Systemic Factors in Software-Related Accidents</a> Nancy G. Leveson
  <li><a href="http://www5.in.tum.de/~huckle/bugse.html">Collection of Software Bugs</a> Prof. Thomas Huckle
  <li><a href="http://www.cs.tau.ac.il/~nachumd/verify/horror.html">Software Horror Stories</a> Nachum Dershowitz
  <li><a href="http://en.wikipedia.org/wiki/List_of_software_bugs">List of software bugs</a> Wikipedia
  <li><a href="http://www.rvs.uni-bielefeld.de/publications/compendium/index.html">Computer-Related Incidents with Commercial Aircraft</a> Peter B. Ladkin, Hiroshi Sogame, Jan Hennig
  <li><a href="http://www.wired.com/software/coolapps/news/2005/11/69355?currentPage=all">History's Worst Software Bugs</a> Simson Garfinkel, 2005
  <li><a href="http://en.wikipedia.org/wiki/Software_bug">Software Bug</a> Wikipedia
  <li><a href="http://www.docstoc.com/docs/75805555/Application-Security">Bad Software</a> Greg Hoglund
</ol>

</body>
</html>
