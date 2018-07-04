; Do NOT change this file unless you are sure you know what you are doing.
; ========================================================================
[Variables]
UnitsOfMeasure=(?siU)<head>.*<locale>(.*)</locale>.*<form>(.*)</form>.*<ut>(.*)</ut>.*<ud>(.*)</ud>.*<us>(.*)</us>.*<up>(.*)</up>.*<ur>(.*)</ur>.*</head>
Location=(?siU)<loc id="(.*)".*<dnam>(.*)</dnam>.*<tm>(.*)</tm>.*<lat>(.*)</lat>.*<lon>(.*)</lon>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<zone>(.*)</zone>.*</loc>
CurrentConditions=(?siU)<cc>.*<lsup>(.*)</lsup>.*<obst>(.*)</obst>.*<tmp>(.*)</tmp>.*<flik>(.*)</flik>.*<t>(.*)</t>.*<icon>(.*)</icon>
CurrentBarometric=(?siU)<cc>.*<bar>.*<r>(.*)</r>.*<d>(.*)</d>.*</bar>
CurrentWind=(?siU)<cc>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>
CurrentElements=(?siU)<cc>.*<hmid>(.*)</hmid>.*<vis>(.*)</vis>.*<uv>.*<i>(.*)</i>.*<t>(.*)</t>.*</uv>.*<dewp>(.*)</dewp>.*<moon>.*<icon>(.*)</icon>.*<t>(.*)</t>.*</moon>.*</cc>
TodayGeneral=(?siU)<dayf>.*<lsup>(.*)</lsup>.*<day d="0".*t="(.*)".*dt="(.*)".*<hi>(.*)</hi>.*<low>(.*)</low>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>
TodayDayConditions=(?siU)<day d="0".*<part p="d">.*<icon>(.*)</icon>.*<t>(.*)</t>.*</part>
TodayDayWind=(?siU)<day d="0".*<part p="d">.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>.*</part>
TodayDayElements=(?siU)<day d="0".*<part p="d">.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>
TodayNightConditions=(?siU)<day d="0".*<part p="n">.*<icon>(.*)</icon>.*<t>(.*)</t>.*</part>
TodayNightWind=(?siU)<day d="0".*<part p="n">.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>.*</part>
TodayNightElements=(?siU)<day d="0".*<part p="n">.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>
Day1General=(?siU)<day d="1".*t="(.*)".*dt="(.*)".*<hi>(.*)</hi>.*<low>(.*)</low>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>
Day1DayConditions=(?siU)<day d="1".*<part p="d">.*<icon>(.*)</icon>.*<t>(.*)</t>
Day1DayWind=(?siU)<day d="1".*<part p="d">.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>
Day1DayElements=(?siU)<day d="1".*<part p="d">.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>
Day1NightConditions=(?siU)<day d="1".*<part p="n">.*<icon>(.*)</icon>.*<t>(.*)</t>
Day1NightWind=(?siU)<day d="1".*<part p="n">.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>
Day1NightElements=(?siU)<day d="1".*<part p="n">.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>
Day2General=(?siU)<day d="2".*t="(.*)".*dt="(.*)".*<hi>(.*)</hi>.*<low>(.*)</low>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>
Day2DayConditions=(?siU)<day d="2".*<part p="d">.*<icon>(.*)</icon>.*<t>(.*)</t>
Day2DayWind=(?siU)<day d="2".*<part p="d">.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>
Day2DayElements=(?siU)<day d="2".*<part p="d">.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>
Day2NightConditions=(?siU)<day d="2".*<part p="n">.*<icon>(.*)</icon>.*<t>(.*)</t>
Day2NightWind=(?siU)<day d="2".*<part p="n">.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>
Day2NightElements=(?siU)<day d="2".*<part p="n">.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>
Day3General=(?siU)<day d="3".*t="(.*)".*dt="(.*)".*<hi>(.*)</hi>.*<low>(.*)</low>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>
Day3DayConditions=(?siU)<day d="3".*<part p="d">.*<icon>(.*)</icon>.*<t>(.*)</t>
Day3DayWind=(?siU)<day d="3".*<part p="d">.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>
Day3DayElements=(?siU)<day d="3".*<part p="d">.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>
Day3NightConditions=(?siU)<day d="3".*<part p="n">.*<icon>(.*)</icon>.*<t>(.*)</t>
Day3NightWind=(?siU)<day d="3".*<part p="n">.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>
Day3NightElements=(?siU)<day d="3".*<part p="n">.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>
Day4General=(?siU)<day d="4".*t="(.*)".*dt="(.*)".*<hi>(.*)</hi>.*<low>(.*)</low>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>
Day4DayConditions=(?siU)<day d="4".*<part p="d">.*<icon>(.*)</icon>.*<t>(.*)</t>
Day4DayWind=(?siU)<day d="4".*<part p="d">.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>
Day4DayElements=(?siU)<day d="4".*<part p="d">.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>
Day4NightConditions=(?siU)<day d="4".*<part p="n">.*<icon>(.*)</icon>.*<t>(.*)</t>
Day4NightWind=(?siU)<day d="4".*<part p="n">.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>
Day4NightElements=(?siU)<day d="4".*<part p="n">.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>
Day5General=(?siU)<day d="5".*t="(.*)".*dt="(.*)".*<hi>(.*)</hi>.*<low>(.*)</low>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>
Day5DayConditions=(?siU)<day d="5".*<part p="d">.*<icon>(.*)</icon>.*<t>(.*)</t>
Day5DayWind=(?siU)<day d="5".*<part p="d">.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>
Day5DayElements=(?siU)<day d="5".*<part p="d">.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>
Day5NightConditions=(?siU)<day d="5".*<part p="n">.*<icon>(.*)</icon>.*<t>(.*)</t>
Day5NightWind=(?siU)<day d="5".*<part p="n">.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>
Day5NightElements=(?siU)<day d="5".*<part p="n">.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>
