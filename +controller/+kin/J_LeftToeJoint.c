/*
 * Automatically Generated from Mathematica.
 * Mon 10 Jul 2017 14:13:00 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t540;
  double t332;
  double t523;
  double t531;
  double t537;
  double t546;
  double t549;
  double t564;
  double t566;
  double t597;
  double t629;
  double t643;
  double t709;
  double t710;
  double t717;
  double t690;
  double t695;
  double t703;
  double t728;
  double t818;
  double t823;
  double t831;
  double t841;
  double t860;
  double t872;
  double t878;
  double t811;
  double t813;
  double t815;
  double t738;
  double t746;
  double t749;
  double t779;
  double t799;
  double t800;
  double t804;
  double t946;
  double t947;
  double t955;
  double t966;
  double t972;
  double t975;
  double t988;
  double t996;
  double t1001;
  double t1011;
  double t1029;
  double t1030;
  double t1033;
  double t1039;
  double t1044;
  double t1053;
  double t1056;
  double t1073;
  double t1074;
  double t1077;
  double t1096;
  double t1099;
  double t1101;
  double t1111;
  double t1124;
  double t1129;
  double t1134;
  double t1142;
  double t1145;
  double t1147;
  double t1156;
  double t1158;
  double t1167;
  double t403;
  double t438;
  double t477;
  double t511;
  double t634;
  double t635;
  double t658;
  double t668;
  double t669;
  double t684;
  double t1198;
  double t1199;
  double t1205;
  double t733;
  double t736;
  double t755;
  double t789;
  double t792;
  double t1233;
  double t1234;
  double t1235;
  double t1223;
  double t1225;
  double t1231;
  double t840;
  double t847;
  double t851;
  double t880;
  double t890;
  double t900;
  double t1271;
  double t1276;
  double t1278;
  double t1248;
  double t1254;
  double t1265;
  double t940;
  double t943;
  double t945;
  double t985;
  double t990;
  double t995;
  double t1239;
  double t1241;
  double t1242;
  double t1291;
  double t1300;
  double t1306;
  double t1015;
  double t1020;
  double t1026;
  double t1054;
  double t1061;
  double t1072;
  double t1316;
  double t1318;
  double t1323;
  double t1327;
  double t1329;
  double t1330;
  double t1087;
  double t1093;
  double t1095;
  double t1132;
  double t1135;
  double t1141;
  double t1338;
  double t1339;
  double t1341;
  double t1346;
  double t1347;
  double t1349;
  double t1153;
  double t1154;
  double t1155;
  double t1359;
  double t1362;
  double t1363;
  double t1367;
  double t1368;
  double t1372;
  double t1414;
  double t1415;
  double t1417;
  double t1407;
  double t1408;
  double t1410;
  double t1432;
  double t1434;
  double t1439;
  double t1424;
  double t1427;
  double t1428;
  double t1459;
  double t1461;
  double t1462;
  double t1471;
  double t1476;
  double t1477;
  double t1482;
  double t1484;
  double t1489;
  double t1492;
  double t1499;
  double t1500;
  double t1504;
  double t1506;
  double t1508;
  double t1512;
  double t1517;
  double t1518;
  double t1521;
  double t1525;
  double t1534;
  double t1580;
  double t1583;
  double t1584;
  double t1575;
  double t1577;
  double t1578;
  double t1605;
  double t1612;
  double t1614;
  double t1587;
  double t1588;
  double t1593;
  double t1627;
  double t1632;
  double t1633;
  double t1639;
  double t1641;
  double t1643;
  double t1648;
  double t1652;
  double t1653;
  double t1659;
  double t1660;
  double t1661;
  double t1663;
  double t1664;
  double t1669;
  double t1672;
  double t1676;
  double t1681;
  double t1685;
  double t1688;
  double t1691;
  double t1733;
  double t1735;
  double t1736;
  double t1728;
  double t1729;
  double t1730;
  double t1748;
  double t1752;
  double t1753;
  double t1739;
  double t1740;
  double t1742;
  double t1766;
  double t1767;
  double t1768;
  double t1771;
  double t1773;
  double t1774;
  double t1779;
  double t1780;
  double t1782;
  double t1785;
  double t1786;
  double t1787;
  double t1790;
  double t1791;
  double t1792;
  double t1798;
  double t1799;
  double t1800;
  double t1804;
  double t1808;
  double t1810;
  double t1847;
  double t1848;
  double t1851;
  double t1833;
  double t1837;
  double t1838;
  double t1861;
  double t1863;
  double t1864;
  double t1869;
  double t1871;
  double t1872;
  double t1876;
  double t1877;
  double t1878;
  double t1881;
  double t1882;
  double t1883;
  double t1885;
  double t1887;
  double t1889;
  double t1891;
  double t1895;
  double t1896;
  double t1901;
  double t1904;
  double t1906;
  double t1926;
  double t1927;
  double t1928;
  double t1940;
  double t1942;
  double t1946;
  double t1932;
  double t1933;
  double t1934;
  double t1955;
  double t1958;
  double t1959;
  double t1963;
  double t1964;
  double t1965;
  double t1969;
  double t1970;
  double t1971;
  double t1976;
  double t1978;
  double t1981;
  double t1985;
  double t1986;
  double t1988;
  double t1992;
  double t1993;
  double t1994;
  double t1998;
  double t2003;
  double t2006;
  double t2041;
  double t2043;
  double t2044;
  double t2034;
  double t2035;
  double t2036;
  double t2025;
  double t2030;
  double t2031;
  double t2055;
  double t2056;
  double t2057;
  double t2061;
  double t2062;
  double t2064;
  double t2067;
  double t2071;
  double t2073;
  double t2077;
  double t2078;
  double t2079;
  double t2081;
  double t2082;
  double t2083;
  double t2085;
  double t2086;
  double t2087;
  double t2091;
  double t2094;
  double t2096;
  double t2119;
  double t2120;
  double t2121;
  double t2124;
  double t2125;
  double t2126;
  double t2129;
  double t2134;
  double t2135;
  double t2139;
  double t2140;
  double t2142;
  double t2148;
  double t2149;
  double t2150;
  double t2153;
  double t2156;
  double t2157;
  double t2161;
  double t2162;
  double t2164;
  double t2168;
  double t2169;
  double t2171;
  double t2174;
  double t2175;
  double t2177;
  double t2180;
  double t2182;
  double t2185;
  double t2208;
  double t2209;
  double t2210;
  double t2213;
  double t2214;
  double t2218;
  double t2220;
  double t2221;
  double t2227;
  double t2229;
  double t2233;
  double t2236;
  double t2238;
  double t2241;
  double t2245;
  double t2246;
  double t2252;
  double t2255;
  double t2258;
  double t2259;
  double t2263;
  double t2265;
  double t2267;
  double t2269;
  double t2271;
  double t2272;
  double t2289;
  double t2290;
  double t2294;
  double t2296;
  double t2299;
  double t2301;
  double t2303;
  double t2304;
  double t2307;
  double t2309;
  double t2311;
  double t2316;
  double t2317;
  double t2318;
  double t2320;
  double t2321;
  double t2322;
  double t2324;
  double t2326;
  double t2328;
  double t2330;
  double t2332;
  double t2336;
  double t2338;
  double t2339;
  double t2342;
  double t2346;
  double t2347;
  double t2350;
  double t2367;
  double t2368;
  double t2369;
  double t2371;
  double t2372;
  double t2374;
  double t2375;
  double t2379;
  double t2380;
  double t2381;
  double t2385;
  double t2386;
  double t2387;
  double t2391;
  double t2392;
  double t2394;
  double t2397;
  double t2398;
  double t2400;
  double t2402;
  double t2403;
  double t2404;
  double t2407;
  double t2408;
  double t2410;
  double t2428;
  double t2429;
  double t2434;
  double t2436;
  double t2437;
  double t2440;
  double t2441;
  double t2442;
  double t2445;
  double t2446;
  double t2447;
  double t2450;
  double t2453;
  double t2454;
  double t2456;
  double t2457;
  double t2458;
  double t2460;
  double t2461;
  double t2462;
  double t2480;
  double t2482;
  double t2483;
  double t2485;
  double t2486;
  double t2489;
  double t2490;
  double t2497;
  double t2498;
  double t2499;
  double t2501;
  double t2502;
  double t2503;
  double t2505;
  double t2506;
  double t2507;
  double t2509;
  double t2510;
  double t2512;
  double t2514;
  double t2515;
  double t2518;
  double t2521;
  double t2523;
  double t2524;
  double t2542;
  double t2543;
  double t2544;
  double t2549;
  double t2551;
  double t2552;
  double t2563;
  double t2564;
  double t2567;
  double t2569;
  double t2570;
  double t2571;
  double t2573;
  double t2574;
  double t2575;
  double t2577;
  double t2578;
  double t2580;
  double t2539;
  double t2540;
  double t2545;
  double t2546;
  double t2547;
  double t2599;
  double t2600;
  double t2603;
  double t2608;
  double t2609;
  double t2610;
  double t2612;
  double t2613;
  double t2614;
  double t2616;
  double t2617;
  double t2618;
  double t2620;
  double t2622;
  double t2624;
  double t2644;
  double t2645;
  double t2646;
  double t2640;
  double t2641;
  double t2642;
  double t2649;
  double t2650;
  double t2651;
  double t2662;
  double t2663;
  double t2664;
  double t2666;
  double t2667;
  double t2668;
  double t2670;
  double t2672;
  double t2674;
  double t2678;
  double t2679;
  double t2680;
  double t2557;
  double t2559;
  double t2560;
  double t2702;
  double t2703;
  double t2704;
  double t2708;
  double t2710;
  double t2711;
  double t2714;
  double t2715;
  double t2717;
  double t2719;
  double t2720;
  double t2721;
  double t2723;
  double t2725;
  double t2726;
  double t2729;
  double t2730;
  double t2731;
  double t2694;
  double t2695;
  double t2697;
  double t2698;
  double t2699;
  double t2749;
  double t2751;
  double t2752;
  double t2755;
  double t2756;
  double t2758;
  double t2759;
  double t2760;
  double t2762;
  double t2764;
  double t2765;
  double t2767;
  double t2768;
  double t2769;
  double t2658;
  double t2659;
  double t2660;
  double t2783;
  double t2784;
  double t2785;
  double t2787;
  double t2788;
  double t2789;
  double t2791;
  double t2792;
  double t2793;
  double t2795;
  double t2796;
  double t2797;
  double t2799;
  double t2800;
  double t2801;
  double t2803;
  double t2804;
  double t2805;
  double t2819;
  double t2820;
  double t2821;
  double t2826;
  double t2827;
  double t2829;
  double t2830;
  double t2832;
  double t2833;
  double t2834;
  double t2836;
  double t2837;
  double t2838;
  double t2816;
  double t2817;
  double t2818;
  double t2823;
  double t2824;
  double t2852;
  double t2853;
  double t2855;
  double t2856;
  double t2857;
  double t2859;
  double t2860;
  double t2871;
  double t2872;
  double t2873;
  double t2876;
  double t2877;
  double t2879;
  double t2880;
  double t2882;
  double t2883;
  double t2884;
  double t2886;
  double t2887;
  double t2888;
  double t2905;
  double t2906;
  double t2907;
  double t2909;
  double t2910;
  double t2912;
  double t2913;
  double t2899;
  double t2900;
  double t2902;
  double t2903;
  double t2904;
  double t2926;
  double t2927;
  double t1380;
  double t2939;
  double t2940;
  double t2941;
  double t2943;
  double t2944;
  double t2946;
  double t2947;
  double t2961;
  double t2962;
  double t2963;
  double t2916;
  double t2920;
  double t2958;
  double t2959;
  double t2960;
  double t2965;
  double t2966;
  double t1379;
  double t1385;
  double t2934;
  double t2982;
  double t2983;
  double t2984;
  double t2950;
  double t2954;
  t540 = Cos(var1[3]);
  t332 = Cos(var1[6]);
  t523 = Cos(var1[5]);
  t531 = Sin(var1[3]);
  t537 = -1.*t523*t531;
  t546 = Sin(var1[4]);
  t549 = Sin(var1[5]);
  t564 = -1.*t540*t546*t549;
  t566 = t537 + t564;
  t597 = Cos(var1[4]);
  t629 = Sin(var1[6]);
  t643 = Cos(var1[7]);
  t709 = -1.*t540*t597*t332;
  t710 = -1.*t566*t629;
  t717 = t709 + t710;
  t690 = t332*t566;
  t695 = -1.*t540*t597*t629;
  t703 = t690 + t695;
  t728 = Sin(var1[7]);
  t818 = Cos(var1[8]);
  t823 = -1.*t818;
  t831 = 1. + t823;
  t841 = Sin(var1[8]);
  t860 = t643*t703;
  t872 = t717*t728;
  t878 = t860 + t872;
  t811 = t540*t523*t546;
  t813 = -1.*t531*t549;
  t815 = t811 + t813;
  t738 = Cos(var1[9]);
  t746 = -1.*t738;
  t749 = 1. + t746;
  t779 = Sin(var1[9]);
  t799 = t643*t717;
  t800 = -1.*t703*t728;
  t804 = t799 + t800;
  t946 = t818*t815;
  t947 = -1.*t878*t841;
  t955 = t946 + t947;
  t966 = Cos(var1[10]);
  t972 = -1.*t966;
  t975 = 1. + t972;
  t988 = Sin(var1[10]);
  t996 = t779*t804;
  t1001 = t738*t955;
  t1011 = t996 + t1001;
  t1029 = t738*t804;
  t1030 = -1.*t779*t955;
  t1033 = t1029 + t1030;
  t1039 = Cos(var1[11]);
  t1044 = -1.*t1039;
  t1053 = 1. + t1044;
  t1056 = Sin(var1[11]);
  t1073 = -1.*t988*t1011;
  t1074 = t966*t1033;
  t1077 = t1073 + t1074;
  t1096 = t966*t1011;
  t1099 = t988*t1033;
  t1101 = t1096 + t1099;
  t1111 = Cos(var1[12]);
  t1124 = -1.*t1111;
  t1129 = 1. + t1124;
  t1134 = Sin(var1[12]);
  t1142 = t1056*t1077;
  t1145 = t1039*t1101;
  t1147 = t1142 + t1145;
  t1156 = t1039*t1077;
  t1158 = -1.*t1056*t1101;
  t1167 = t1156 + t1158;
  t403 = -1.*t332;
  t438 = 1. + t403;
  t477 = 0.135*t438;
  t511 = 0. + t477;
  t634 = -0.135*t629;
  t635 = 0. + t634;
  t658 = -1.*t643;
  t668 = 1. + t658;
  t669 = 0.135*t668;
  t684 = 0. + t669;
  t1198 = t540*t523;
  t1199 = -1.*t531*t546*t549;
  t1205 = t1198 + t1199;
  t733 = -0.135*t728;
  t736 = 0. + t733;
  t755 = -0.09*t749;
  t789 = 0.049*t779;
  t792 = 0. + t755 + t789;
  t1233 = -1.*t597*t332*t531;
  t1234 = -1.*t1205*t629;
  t1235 = t1233 + t1234;
  t1223 = t332*t1205;
  t1225 = -1.*t597*t531*t629;
  t1231 = t1223 + t1225;
  t840 = -0.049*t831;
  t847 = -0.135*t841;
  t851 = 0. + t840 + t847;
  t880 = 0.135*t831;
  t890 = -0.049*t841;
  t900 = 0. + t880 + t890;
  t1271 = t643*t1231;
  t1276 = t1235*t728;
  t1278 = t1271 + t1276;
  t1248 = t523*t531*t546;
  t1254 = t540*t549;
  t1265 = t1248 + t1254;
  t940 = -0.049*t749;
  t943 = -0.09*t779;
  t945 = 0. + t940 + t943;
  t985 = -0.049*t975;
  t990 = -0.21*t988;
  t995 = 0. + t985 + t990;
  t1239 = t643*t1235;
  t1241 = -1.*t1231*t728;
  t1242 = t1239 + t1241;
  t1291 = t818*t1265;
  t1300 = -1.*t1278*t841;
  t1306 = t1291 + t1300;
  t1015 = -0.21*t975;
  t1020 = 0.049*t988;
  t1026 = 0. + t1015 + t1020;
  t1054 = -0.2707*t1053;
  t1061 = 0.0016*t1056;
  t1072 = 0. + t1054 + t1061;
  t1316 = t779*t1242;
  t1318 = t738*t1306;
  t1323 = t1316 + t1318;
  t1327 = t738*t1242;
  t1329 = -1.*t779*t1306;
  t1330 = t1327 + t1329;
  t1087 = -0.0016*t1053;
  t1093 = -0.2707*t1056;
  t1095 = 0. + t1087 + t1093;
  t1132 = 0.0184*t1129;
  t1135 = -0.7055*t1134;
  t1141 = 0. + t1132 + t1135;
  t1338 = -1.*t988*t1323;
  t1339 = t966*t1330;
  t1341 = t1338 + t1339;
  t1346 = t966*t1323;
  t1347 = t988*t1330;
  t1349 = t1346 + t1347;
  t1153 = -0.7055*t1129;
  t1154 = -0.0184*t1134;
  t1155 = 0. + t1153 + t1154;
  t1359 = t1056*t1341;
  t1362 = t1039*t1349;
  t1363 = t1359 + t1362;
  t1367 = t1039*t1341;
  t1368 = -1.*t1056*t1349;
  t1372 = t1367 + t1368;
  t1414 = t597*t332;
  t1415 = -1.*t546*t549*t629;
  t1417 = t1414 + t1415;
  t1407 = t332*t546*t549;
  t1408 = t597*t629;
  t1410 = t1407 + t1408;
  t1432 = t643*t1410;
  t1434 = t1417*t728;
  t1439 = t1432 + t1434;
  t1424 = t643*t1417;
  t1427 = -1.*t1410*t728;
  t1428 = t1424 + t1427;
  t1459 = -1.*t523*t818*t546;
  t1461 = -1.*t1439*t841;
  t1462 = t1459 + t1461;
  t1471 = t779*t1428;
  t1476 = t738*t1462;
  t1477 = t1471 + t1476;
  t1482 = t738*t1428;
  t1484 = -1.*t779*t1462;
  t1489 = t1482 + t1484;
  t1492 = -1.*t988*t1477;
  t1499 = t966*t1489;
  t1500 = t1492 + t1499;
  t1504 = t966*t1477;
  t1506 = t988*t1489;
  t1508 = t1504 + t1506;
  t1512 = t1056*t1500;
  t1517 = t1039*t1508;
  t1518 = t1512 + t1517;
  t1521 = t1039*t1500;
  t1525 = -1.*t1056*t1508;
  t1534 = t1521 + t1525;
  t1580 = t332*t531*t546;
  t1583 = t597*t531*t549*t629;
  t1584 = t1580 + t1583;
  t1575 = -1.*t597*t332*t531*t549;
  t1577 = t531*t546*t629;
  t1578 = t1575 + t1577;
  t1605 = t643*t1578;
  t1612 = t1584*t728;
  t1614 = t1605 + t1612;
  t1587 = t643*t1584;
  t1588 = -1.*t1578*t728;
  t1593 = t1587 + t1588;
  t1627 = t597*t523*t818*t531;
  t1632 = -1.*t1614*t841;
  t1633 = t1627 + t1632;
  t1639 = t779*t1593;
  t1641 = t738*t1633;
  t1643 = t1639 + t1641;
  t1648 = t738*t1593;
  t1652 = -1.*t779*t1633;
  t1653 = t1648 + t1652;
  t1659 = -1.*t988*t1643;
  t1660 = t966*t1653;
  t1661 = t1659 + t1660;
  t1663 = t966*t1643;
  t1664 = t988*t1653;
  t1669 = t1663 + t1664;
  t1672 = t1056*t1661;
  t1676 = t1039*t1669;
  t1681 = t1672 + t1676;
  t1685 = t1039*t1661;
  t1688 = -1.*t1056*t1669;
  t1691 = t1685 + t1688;
  t1733 = -1.*t540*t332*t546;
  t1735 = -1.*t540*t597*t549*t629;
  t1736 = t1733 + t1735;
  t1728 = t540*t597*t332*t549;
  t1729 = -1.*t540*t546*t629;
  t1730 = t1728 + t1729;
  t1748 = t643*t1730;
  t1752 = t1736*t728;
  t1753 = t1748 + t1752;
  t1739 = t643*t1736;
  t1740 = -1.*t1730*t728;
  t1742 = t1739 + t1740;
  t1766 = -1.*t540*t597*t523*t818;
  t1767 = -1.*t1753*t841;
  t1768 = t1766 + t1767;
  t1771 = t779*t1742;
  t1773 = t738*t1768;
  t1774 = t1771 + t1773;
  t1779 = t738*t1742;
  t1780 = -1.*t779*t1768;
  t1782 = t1779 + t1780;
  t1785 = -1.*t988*t1774;
  t1786 = t966*t1782;
  t1787 = t1785 + t1786;
  t1790 = t966*t1774;
  t1791 = t988*t1782;
  t1792 = t1790 + t1791;
  t1798 = t1056*t1787;
  t1799 = t1039*t1792;
  t1800 = t1798 + t1799;
  t1804 = t1039*t1787;
  t1808 = -1.*t1056*t1792;
  t1810 = t1804 + t1808;
  t1847 = -1.*t597*t523*t332*t643;
  t1848 = t597*t523*t629*t728;
  t1851 = t1847 + t1848;
  t1833 = t597*t523*t643*t629;
  t1837 = t597*t523*t332*t728;
  t1838 = t1833 + t1837;
  t1861 = -1.*t597*t818*t549;
  t1863 = -1.*t1851*t841;
  t1864 = t1861 + t1863;
  t1869 = t779*t1838;
  t1871 = t738*t1864;
  t1872 = t1869 + t1871;
  t1876 = t738*t1838;
  t1877 = -1.*t779*t1864;
  t1878 = t1876 + t1877;
  t1881 = -1.*t988*t1872;
  t1882 = t966*t1878;
  t1883 = t1881 + t1882;
  t1885 = t966*t1872;
  t1887 = t988*t1878;
  t1889 = t1885 + t1887;
  t1891 = t1056*t1883;
  t1895 = t1039*t1889;
  t1896 = t1891 + t1895;
  t1901 = t1039*t1883;
  t1904 = -1.*t1056*t1889;
  t1906 = t1901 + t1904;
  t1926 = -1.*t523*t531*t546;
  t1927 = -1.*t540*t549;
  t1928 = t1926 + t1927;
  t1940 = t332*t643*t1928;
  t1942 = -1.*t1928*t629*t728;
  t1946 = t1940 + t1942;
  t1932 = -1.*t643*t1928*t629;
  t1933 = -1.*t332*t1928*t728;
  t1934 = t1932 + t1933;
  t1955 = t818*t1205;
  t1958 = -1.*t1946*t841;
  t1959 = t1955 + t1958;
  t1963 = t779*t1934;
  t1964 = t738*t1959;
  t1965 = t1963 + t1964;
  t1969 = t738*t1934;
  t1970 = -1.*t779*t1959;
  t1971 = t1969 + t1970;
  t1976 = -1.*t988*t1965;
  t1978 = t966*t1971;
  t1981 = t1976 + t1978;
  t1985 = t966*t1965;
  t1986 = t988*t1971;
  t1988 = t1985 + t1986;
  t1992 = t1056*t1981;
  t1993 = t1039*t1988;
  t1994 = t1992 + t1993;
  t1998 = t1039*t1981;
  t2003 = -1.*t1056*t1988;
  t2006 = t1998 + t2003;
  t2041 = t332*t643*t815;
  t2043 = -1.*t815*t629*t728;
  t2044 = t2041 + t2043;
  t2034 = t523*t531;
  t2035 = t540*t546*t549;
  t2036 = t2034 + t2035;
  t2025 = -1.*t643*t815*t629;
  t2030 = -1.*t332*t815*t728;
  t2031 = t2025 + t2030;
  t2055 = t818*t2036;
  t2056 = -1.*t2044*t841;
  t2057 = t2055 + t2056;
  t2061 = t779*t2031;
  t2062 = t738*t2057;
  t2064 = t2061 + t2062;
  t2067 = t738*t2031;
  t2071 = -1.*t779*t2057;
  t2073 = t2067 + t2071;
  t2077 = -1.*t988*t2064;
  t2078 = t966*t2073;
  t2079 = t2077 + t2078;
  t2081 = t966*t2064;
  t2082 = t988*t2073;
  t2083 = t2081 + t2082;
  t2085 = t1056*t2079;
  t2086 = t1039*t2083;
  t2087 = t2085 + t2086;
  t2091 = t1039*t2079;
  t2094 = -1.*t1056*t2083;
  t2096 = t2091 + t2094;
  t2119 = t332*t546;
  t2120 = t597*t549*t629;
  t2121 = t2119 + t2120;
  t2124 = t597*t332*t549;
  t2125 = -1.*t546*t629;
  t2126 = t2124 + t2125;
  t2129 = t643*t2121;
  t2134 = t2126*t728;
  t2135 = t2129 + t2134;
  t2139 = t643*t2126;
  t2140 = -1.*t2121*t728;
  t2142 = t2139 + t2140;
  t2148 = t779*t2142;
  t2149 = -1.*t738*t2135*t841;
  t2150 = t2148 + t2149;
  t2153 = t738*t2142;
  t2156 = t779*t2135*t841;
  t2157 = t2153 + t2156;
  t2161 = -1.*t988*t2150;
  t2162 = t966*t2157;
  t2164 = t2161 + t2162;
  t2168 = t966*t2150;
  t2169 = t988*t2157;
  t2171 = t2168 + t2169;
  t2174 = t1056*t2164;
  t2175 = t1039*t2171;
  t2177 = t2174 + t2175;
  t2180 = t1039*t2164;
  t2182 = -1.*t1056*t2171;
  t2185 = t2180 + t2182;
  t2208 = -1.*t332*t1205;
  t2209 = t597*t531*t629;
  t2210 = t2208 + t2209;
  t2213 = t2210*t728;
  t2214 = t1239 + t2213;
  t2218 = t643*t2210;
  t2220 = -1.*t1235*t728;
  t2221 = t2218 + t2220;
  t2227 = t779*t2221;
  t2229 = -1.*t738*t2214*t841;
  t2233 = t2227 + t2229;
  t2236 = t738*t2221;
  t2238 = t779*t2214*t841;
  t2241 = t2236 + t2238;
  t2245 = -1.*t988*t2233;
  t2246 = t966*t2241;
  t2252 = t2245 + t2246;
  t2255 = t966*t2233;
  t2258 = t988*t2241;
  t2259 = t2255 + t2258;
  t2263 = t1056*t2252;
  t2265 = t1039*t2259;
  t2267 = t2263 + t2265;
  t2269 = t1039*t2252;
  t2271 = -1.*t1056*t2259;
  t2272 = t2269 + t2271;
  t2289 = t540*t597*t332;
  t2290 = -1.*t2036*t629;
  t2294 = t2289 + t2290;
  t2296 = -1.*t332*t2036;
  t2299 = t2296 + t695;
  t2301 = t643*t2294;
  t2303 = t2299*t728;
  t2304 = t2301 + t2303;
  t2307 = t643*t2299;
  t2309 = -1.*t2294*t728;
  t2311 = t2307 + t2309;
  t2316 = t779*t2311;
  t2317 = -1.*t738*t2304*t841;
  t2318 = t2316 + t2317;
  t2320 = t738*t2311;
  t2321 = t779*t2304*t841;
  t2322 = t2320 + t2321;
  t2324 = -1.*t988*t2318;
  t2326 = t966*t2322;
  t2328 = t2324 + t2326;
  t2330 = t966*t2318;
  t2332 = t988*t2322;
  t2336 = t2330 + t2332;
  t2338 = t1056*t2328;
  t2339 = t1039*t2336;
  t2342 = t2338 + t2339;
  t2346 = t1039*t2328;
  t2347 = -1.*t1056*t2336;
  t2350 = t2346 + t2347;
  t2367 = -1.*t597*t332*t549;
  t2368 = t546*t629;
  t2369 = t2367 + t2368;
  t2371 = -1.*t2369*t728;
  t2372 = t2129 + t2371;
  t2374 = -1.*t643*t2369;
  t2375 = t2374 + t2140;
  t2379 = t779*t2375;
  t2380 = -1.*t738*t2372*t841;
  t2381 = t2379 + t2380;
  t2385 = t738*t2375;
  t2386 = t779*t2372*t841;
  t2387 = t2385 + t2386;
  t2391 = -1.*t988*t2381;
  t2392 = t966*t2387;
  t2394 = t2391 + t2392;
  t2397 = t966*t2381;
  t2398 = t988*t2387;
  t2400 = t2397 + t2398;
  t2402 = t1056*t2394;
  t2403 = t1039*t2400;
  t2404 = t2402 + t2403;
  t2407 = t1039*t2394;
  t2408 = -1.*t1056*t2400;
  t2410 = t2407 + t2408;
  t2428 = -1.*t643*t1231;
  t2429 = t2428 + t2220;
  t2434 = t779*t2429;
  t2436 = -1.*t738*t1242*t841;
  t2437 = t2434 + t2436;
  t2440 = t738*t2429;
  t2441 = t779*t1242*t841;
  t2442 = t2440 + t2441;
  t2445 = -1.*t988*t2437;
  t2446 = t966*t2442;
  t2447 = t2445 + t2446;
  t2450 = t966*t2437;
  t2453 = t988*t2442;
  t2454 = t2450 + t2453;
  t2456 = t1056*t2447;
  t2457 = t1039*t2454;
  t2458 = t2456 + t2457;
  t2460 = t1039*t2447;
  t2461 = -1.*t1056*t2454;
  t2462 = t2460 + t2461;
  t2480 = t332*t2036;
  t2482 = t540*t597*t629;
  t2483 = t2480 + t2482;
  t2485 = -1.*t2483*t728;
  t2486 = t2301 + t2485;
  t2489 = -1.*t643*t2483;
  t2490 = t2489 + t2309;
  t2497 = t779*t2490;
  t2498 = -1.*t738*t2486*t841;
  t2499 = t2497 + t2498;
  t2501 = t738*t2490;
  t2502 = t779*t2486*t841;
  t2503 = t2501 + t2502;
  t2505 = -1.*t988*t2499;
  t2506 = t966*t2503;
  t2507 = t2505 + t2506;
  t2509 = t966*t2499;
  t2510 = t988*t2503;
  t2512 = t2509 + t2510;
  t2514 = t1056*t2507;
  t2515 = t1039*t2512;
  t2518 = t2514 + t2515;
  t2521 = t1039*t2507;
  t2523 = -1.*t1056*t2512;
  t2524 = t2521 + t2523;
  t2542 = t643*t2369;
  t2543 = t2121*t728;
  t2544 = t2542 + t2543;
  t2549 = -1.*t818*t2544;
  t2551 = -1.*t597*t523*t841;
  t2552 = t2549 + t2551;
  t2563 = -1.*t966*t779*t2552;
  t2564 = -1.*t738*t988*t2552;
  t2567 = t2563 + t2564;
  t2569 = t738*t966*t2552;
  t2570 = -1.*t779*t988*t2552;
  t2571 = t2569 + t2570;
  t2573 = t1056*t2567;
  t2574 = t1039*t2571;
  t2575 = t2573 + t2574;
  t2577 = t1039*t2567;
  t2578 = -1.*t1056*t2571;
  t2580 = t2577 + t2578;
  t2539 = -0.135*t818;
  t2540 = t2539 + t890;
  t2545 = -0.049*t818;
  t2546 = 0.135*t841;
  t2547 = t2545 + t2546;
  t2599 = -1.*t818*t1278;
  t2600 = -1.*t1265*t841;
  t2603 = t2599 + t2600;
  t2608 = -1.*t966*t779*t2603;
  t2609 = -1.*t738*t988*t2603;
  t2610 = t2608 + t2609;
  t2612 = t738*t966*t2603;
  t2613 = -1.*t779*t988*t2603;
  t2614 = t2612 + t2613;
  t2616 = t1056*t2610;
  t2617 = t1039*t2614;
  t2618 = t2616 + t2617;
  t2620 = t1039*t2610;
  t2622 = -1.*t1056*t2614;
  t2624 = t2620 + t2622;
  t2644 = t643*t2483;
  t2645 = t2294*t728;
  t2646 = t2644 + t2645;
  t2640 = -1.*t540*t523*t546;
  t2641 = t531*t549;
  t2642 = t2640 + t2641;
  t2649 = -1.*t818*t2646;
  t2650 = -1.*t2642*t841;
  t2651 = t2649 + t2650;
  t2662 = -1.*t966*t779*t2651;
  t2663 = -1.*t738*t988*t2651;
  t2664 = t2662 + t2663;
  t2666 = t738*t966*t2651;
  t2667 = -1.*t779*t988*t2651;
  t2668 = t2666 + t2667;
  t2670 = t1056*t2664;
  t2672 = t1039*t2668;
  t2674 = t2670 + t2672;
  t2678 = t1039*t2664;
  t2679 = -1.*t1056*t2668;
  t2680 = t2678 + t2679;
  t2557 = t597*t523*t818;
  t2559 = -1.*t2544*t841;
  t2560 = t2557 + t2559;
  t2702 = -1.*t779*t2372;
  t2703 = -1.*t738*t2560;
  t2704 = t2702 + t2703;
  t2708 = t738*t2372;
  t2710 = -1.*t779*t2560;
  t2711 = t2708 + t2710;
  t2714 = t988*t2704;
  t2715 = t966*t2711;
  t2717 = t2714 + t2715;
  t2719 = t966*t2704;
  t2720 = -1.*t988*t2711;
  t2721 = t2719 + t2720;
  t2723 = -1.*t1056*t2717;
  t2725 = t1039*t2721;
  t2726 = t2723 + t2725;
  t2729 = t1039*t2717;
  t2730 = t1056*t2721;
  t2731 = t2729 + t2730;
  t2694 = 0.049*t738;
  t2695 = t2694 + t943;
  t2697 = -0.09*t738;
  t2698 = -0.049*t779;
  t2699 = t2697 + t2698;
  t2749 = -1.*t779*t1242;
  t2751 = -1.*t738*t1306;
  t2752 = t2749 + t2751;
  t2755 = t988*t2752;
  t2756 = t2755 + t1339;
  t2758 = t966*t2752;
  t2759 = -1.*t988*t1330;
  t2760 = t2758 + t2759;
  t2762 = -1.*t1056*t2756;
  t2764 = t1039*t2760;
  t2765 = t2762 + t2764;
  t2767 = t1039*t2756;
  t2768 = t1056*t2760;
  t2769 = t2767 + t2768;
  t2658 = t818*t2642;
  t2659 = -1.*t2646*t841;
  t2660 = t2658 + t2659;
  t2783 = -1.*t779*t2486;
  t2784 = -1.*t738*t2660;
  t2785 = t2783 + t2784;
  t2787 = t738*t2486;
  t2788 = -1.*t779*t2660;
  t2789 = t2787 + t2788;
  t2791 = t988*t2785;
  t2792 = t966*t2789;
  t2793 = t2791 + t2792;
  t2795 = t966*t2785;
  t2796 = -1.*t988*t2789;
  t2797 = t2795 + t2796;
  t2799 = -1.*t1056*t2793;
  t2800 = t1039*t2797;
  t2801 = t2799 + t2800;
  t2803 = t1039*t2793;
  t2804 = t1056*t2797;
  t2805 = t2803 + t2804;
  t2819 = t779*t2372;
  t2820 = t738*t2560;
  t2821 = t2819 + t2820;
  t2826 = -1.*t988*t2821;
  t2827 = t2826 + t2715;
  t2829 = -1.*t966*t2821;
  t2830 = t2829 + t2720;
  t2832 = -1.*t1056*t2827;
  t2833 = t1039*t2830;
  t2834 = t2832 + t2833;
  t2836 = t1039*t2827;
  t2837 = t1056*t2830;
  t2838 = t2836 + t2837;
  t2816 = -0.21*t966;
  t2817 = -0.049*t988;
  t2818 = t2816 + t2817;
  t2823 = 0.049*t966;
  t2824 = t2823 + t990;
  t2852 = -1.*t966*t1323;
  t2853 = t2852 + t2759;
  t2855 = -1.*t1056*t1341;
  t2856 = t1039*t2853;
  t2857 = t2855 + t2856;
  t2859 = t1056*t2853;
  t2860 = t1367 + t2859;
  t2871 = t779*t2486;
  t2872 = t738*t2660;
  t2873 = t2871 + t2872;
  t2876 = -1.*t988*t2873;
  t2877 = t2876 + t2792;
  t2879 = -1.*t966*t2873;
  t2880 = t2879 + t2796;
  t2882 = -1.*t1056*t2877;
  t2883 = t1039*t2880;
  t2884 = t2882 + t2883;
  t2886 = t1039*t2877;
  t2887 = t1056*t2880;
  t2888 = t2886 + t2887;
  t2905 = t966*t2821;
  t2906 = t988*t2711;
  t2907 = t2905 + t2906;
  t2909 = -1.*t1039*t2907;
  t2910 = t2832 + t2909;
  t2912 = -1.*t1056*t2907;
  t2913 = t2836 + t2912;
  t2899 = 0.0016*t1039;
  t2900 = t2899 + t1093;
  t2902 = -0.2707*t1039;
  t2903 = -0.0016*t1056;
  t2904 = t2902 + t2903;
  t2926 = -1.*t1039*t1349;
  t2927 = t2855 + t2926;
  t1380 = t1111*t1372;
  t2939 = t966*t2873;
  t2940 = t988*t2789;
  t2941 = t2939 + t2940;
  t2943 = -1.*t1039*t2941;
  t2944 = t2882 + t2943;
  t2946 = -1.*t1056*t2941;
  t2947 = t2886 + t2946;
  t2961 = t1056*t2827;
  t2962 = t1039*t2907;
  t2963 = t2961 + t2962;
  t2916 = t1111*t2913;
  t2920 = -1.*t1134*t2913;
  t2958 = -0.7055*t1111;
  t2959 = 0.0184*t1134;
  t2960 = t2958 + t2959;
  t2965 = -0.0184*t1111;
  t2966 = t2965 + t1135;
  t1379 = -1.*t1134*t1363;
  t1385 = t1379 + t1380;
  t2934 = -1.*t1134*t1372;
  t2982 = t1056*t2877;
  t2983 = t1039*t2941;
  t2984 = t2982 + t2983;
  t2950 = t1111*t2947;
  t2954 = -1.*t1134*t2947;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0;
  p_output1[10]=t1026*t1033 + t1072*t1077 + t1095*t1101 + t1141*t1147 + t1155*t1167 - 1.1135*(-1.*t1134*t1147 + t1111*t1167) - 0.0216*(t1111*t1147 + t1134*t1167) + t511*t566 - 1.*t540*t597*t635 + t684*t703 + t717*t736 + t792*t804 + t815*t851 + 0.1305*(t815*t841 + t818*t878) + t878*t900 + t945*t955 + t1011*t995;
  p_output1[11]=t1026*t1330 + t1072*t1341 + t1095*t1349 + t1141*t1363 + t1155*t1372 - 0.0216*(t1111*t1363 + t1134*t1372) - 1.1135*t1385 + t1205*t511 - 1.*t531*t597*t635 + t1231*t684 + t1235*t736 + t1242*t792 + 0.1305*(t1278*t818 + t1265*t841) + t1265*t851 + t1278*t900 + t1306*t945 + t1323*t995;
  p_output1[12]=t1026*t1489 + t1072*t1500 + t1095*t1508 + t1141*t1518 + t1155*t1534 - 1.1135*(-1.*t1134*t1518 + t1111*t1534) - 0.0216*(t1111*t1518 + t1134*t1534) + t511*t546*t549 + t597*t635 + t1410*t684 + t1417*t736 + t1428*t792 + 0.1305*(t1439*t818 - 1.*t523*t546*t841) - 1.*t523*t546*t851 + t1439*t900 + t1462*t945 + t1477*t995;
  p_output1[13]=t1026*t1653 + t1072*t1661 + t1095*t1669 + t1141*t1681 + t1155*t1691 - 1.1135*(-1.*t1134*t1681 + t1111*t1691) - 0.0216*(t1111*t1681 + t1134*t1691) - 1.*t511*t531*t549*t597 + t531*t546*t635 + t1578*t684 + t1584*t736 + t1593*t792 + 0.1305*(t1614*t818 + t523*t531*t597*t841) + t523*t531*t597*t851 + t1614*t900 + t1633*t945 + t1643*t995;
  p_output1[14]=t1026*t1782 + t1072*t1787 + t1095*t1792 + t1141*t1800 + t1155*t1810 - 1.1135*(-1.*t1134*t1800 + t1111*t1810) - 0.0216*(t1111*t1800 + t1134*t1810) + t511*t540*t549*t597 - 1.*t540*t546*t635 + t1730*t684 + t1736*t736 + t1742*t792 + 0.1305*(t1753*t818 - 1.*t523*t540*t597*t841) - 1.*t523*t540*t597*t851 + t1753*t900 + t1768*t945 + t1774*t995;
  p_output1[15]=t1026*t1878 + t1072*t1883 + t1095*t1889 + t1141*t1896 + t1155*t1906 - 1.1135*(-1.*t1134*t1896 + t1111*t1906) - 0.0216*(t1111*t1896 + t1134*t1906) - 1.*t511*t523*t597 - 1.*t332*t523*t597*t684 + t523*t597*t629*t736 + t1838*t792 + 0.1305*(t1851*t818 - 1.*t549*t597*t841) - 1.*t549*t597*t851 + t1851*t900 + t1864*t945 + t1872*t995;
  p_output1[16]=t1026*t1971 + t1072*t1981 + t1095*t1988 + t1141*t1994 + t1155*t2006 - 1.1135*(-1.*t1134*t1994 + t1111*t2006) - 0.0216*(t1111*t1994 + t1134*t2006) + t1928*t511 + t1928*t332*t684 - 1.*t1928*t629*t736 + t1934*t792 + 0.1305*(t1946*t818 + t1205*t841) + t1205*t851 + t1946*t900 + t1959*t945 + t1965*t995;
  p_output1[17]=t1026*t2073 + t1072*t2079 + t1095*t2083 + t1141*t2087 + t1155*t2096 - 1.1135*(-1.*t1134*t2087 + t1111*t2096) - 0.0216*(t1111*t2087 + t1134*t2096) + t2031*t792 + t511*t815 + t332*t684*t815 - 1.*t629*t736*t815 + 0.1305*(t2044*t818 + t2036*t841) + t2036*t851 + t2044*t900 + t2057*t945 + t2064*t995;
  p_output1[18]=t1026*t2157 + t1072*t2164 + t1095*t2171 + t1141*t2177 + t1155*t2185 - 1.1135*(-1.*t1134*t2177 + t1111*t2185) - 0.0216*(t1111*t2177 + t1134*t2185) - 0.135*t332*t546 - 0.135*t549*t597*t629 + t2121*t684 + t2126*t736 + t2142*t792 + 0.1305*t2135*t818 + t2135*t900 - 1.*t2135*t841*t945 + t2150*t995;
  p_output1[19]=t1026*t2241 + t1072*t2252 + t1095*t2259 + t1141*t2267 + t1155*t2272 - 1.1135*(-1.*t1134*t2267 + t1111*t2272) - 0.0216*(t1111*t2267 + t1134*t2272) + 0.135*t332*t531*t597 + 0.135*t1205*t629 + t1235*t684 + t2210*t736 + t2221*t792 + 0.1305*t2214*t818 + t2214*t900 - 1.*t2214*t841*t945 + t2233*t995;
  p_output1[20]=t1026*t2322 + t1072*t2328 + t1095*t2336 + t1141*t2342 + t1155*t2350 - 1.1135*(-1.*t1134*t2342 + t1111*t2350) - 0.0216*(t1111*t2342 + t1134*t2350) - 0.135*t332*t540*t597 + 0.135*t2036*t629 + t2294*t684 + t2299*t736 + t2311*t792 + 0.1305*t2304*t818 + t2304*t900 - 1.*t2304*t841*t945 + t2318*t995;
  p_output1[21]=t1026*t2387 + t1072*t2394 + t1095*t2400 + t1141*t2404 + t1155*t2410 - 1.1135*(-1.*t1134*t2404 + t1111*t2410) - 0.0216*(t1111*t2404 + t1134*t2410) - 0.135*t2121*t643 + 0.135*t2369*t728 + t2375*t792 + 0.1305*t2372*t818 + t2372*t900 - 1.*t2372*t841*t945 + t2381*t995;
  p_output1[22]=t1026*t2442 + t1072*t2447 + t1095*t2454 + t1141*t2458 + t1155*t2462 - 1.1135*(-1.*t1134*t2458 + t1111*t2462) - 0.0216*(t1111*t2458 + t1134*t2462) - 0.135*t1235*t643 + 0.135*t1231*t728 + t2429*t792 + 0.1305*t1242*t818 + t1242*t900 - 1.*t1242*t841*t945 + t2437*t995;
  p_output1[23]=t1026*t2503 + t1072*t2507 + t1095*t2512 + t1141*t2518 + t1155*t2524 - 1.1135*(-1.*t1134*t2518 + t1111*t2524) - 0.0216*(t1111*t2518 + t1134*t2524) - 0.135*t2294*t643 + 0.135*t2483*t728 + t2490*t792 + 0.1305*t2486*t818 + t2486*t900 - 1.*t2486*t841*t945 + t2499*t995;
  p_output1[24]=t2544*t2547 + 0.1305*t2560 + t1072*t2567 + t1095*t2571 + t1141*t2575 + t1155*t2580 - 1.1135*(-1.*t1134*t2575 + t1111*t2580) - 0.0216*(t1111*t2575 + t1134*t2580) + t2540*t523*t597 - 1.*t1026*t2552*t779 + t2552*t945 + t2552*t738*t995;
  p_output1[25]=0.1305*t1306 + t1265*t2540 + t1278*t2547 + t1072*t2610 + t1095*t2614 + t1141*t2618 + t1155*t2624 - 1.1135*(-1.*t1134*t2618 + t1111*t2624) - 0.0216*(t1111*t2618 + t1134*t2624) - 1.*t1026*t2603*t779 + t2603*t945 + t2603*t738*t995;
  p_output1[26]=t2540*t2642 + t2547*t2646 + 0.1305*t2660 + t1072*t2664 + t1095*t2668 + t1141*t2674 + t1155*t2680 - 1.1135*(-1.*t1134*t2674 + t1111*t2680) - 0.0216*(t1111*t2674 + t1134*t2680) - 1.*t1026*t2651*t779 + t2651*t945 + t2651*t738*t995;
  p_output1[27]=t2372*t2695 + t2560*t2699 + t1026*t2704 + t1095*t2717 + t1072*t2721 + t1155*t2726 + t1141*t2731 - 0.0216*(t1134*t2726 + t1111*t2731) - 1.1135*(t1111*t2726 - 1.*t1134*t2731) + t2711*t995;
  p_output1[28]=t1242*t2695 + t1306*t2699 + t1026*t2752 + t1095*t2756 + t1072*t2760 + t1155*t2765 + t1141*t2769 - 0.0216*(t1134*t2765 + t1111*t2769) - 1.1135*(t1111*t2765 - 1.*t1134*t2769) + t1330*t995;
  p_output1[29]=t2486*t2695 + t2660*t2699 + t1026*t2785 + t1095*t2793 + t1072*t2797 + t1155*t2801 + t1141*t2805 - 0.0216*(t1134*t2801 + t1111*t2805) - 1.1135*(t1111*t2801 - 1.*t1134*t2805) + t2789*t995;
  p_output1[30]=t2818*t2821 + t2711*t2824 + t1095*t2827 + t1072*t2830 + t1155*t2834 + t1141*t2838 - 0.0216*(t1134*t2834 + t1111*t2838) - 1.1135*(t1111*t2834 - 1.*t1134*t2838);
  p_output1[31]=t1095*t1341 + t1323*t2818 + t1330*t2824 + t1072*t2853 + t1155*t2857 + t1141*t2860 - 0.0216*(t1134*t2857 + t1111*t2860) - 1.1135*(t1111*t2857 - 1.*t1134*t2860);
  p_output1[32]=t2789*t2824 + t2818*t2873 + t1095*t2877 + t1072*t2880 + t1155*t2884 + t1141*t2888 - 0.0216*(t1134*t2884 + t1111*t2888) - 1.1135*(t1111*t2884 - 1.*t1134*t2888);
  p_output1[33]=t2827*t2900 + t2904*t2907 + t1155*t2910 + t1141*t2913 - 0.0216*(t1134*t2910 + t2916) - 1.1135*(t1111*t2910 + t2920);
  p_output1[34]=t1141*t1372 + t1341*t2900 + t1349*t2904 + t1155*t2927 - 0.0216*(t1380 + t1134*t2927) - 1.1135*(t1111*t2927 + t2934);
  p_output1[35]=t2877*t2900 + t2904*t2941 + t1155*t2944 + t1141*t2947 - 0.0216*(t1134*t2944 + t2950) - 1.1135*(t1111*t2944 + t2954);
  p_output1[36]=t2960*t2963 - 1.1135*(t2920 - 1.*t1111*t2963) - 0.0216*(t2916 - 1.*t1134*t2963) + t2913*t2966;
  p_output1[37]=-0.0216*t1385 - 1.1135*(-1.*t1111*t1363 + t2934) + t1363*t2960 + t1372*t2966;
  p_output1[38]=t2947*t2966 + t2960*t2984 - 1.1135*(t2954 - 1.*t1111*t2984) - 0.0216*(t2950 - 1.*t1134*t2984);
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 22, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_LeftToeJoint.hh"

namespace SymFunction
{

void J_LeftToeJoint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE