//#############################################################################
//! \file   input.c
//! \brief  Input Vector (512) 
//! \author Vishal Coelho 
//! \date   21-Apr-2017
//! 
//
//  Group:          C2000
//  Target Family:  $DEVICE$
//
//#############################################################################
//
//
// $Copyright: Copyright (C) 2024 Texas Instruments Incorporated -
//             http://www.ti.com/ ALL RIGHTS RESERVED $
//#############################################################################

#include <stdint.h>

#ifdef __cplusplus
#pragma DATA_SECTION("FFT_buffer_1")
#else
#pragma DATA_SECTION(test_input, "FFT_buffer_1")
#endif

// Matrix is 4 times its required size as it will be used to store
// 512 doubles (64-bits) at a later point
uint16_t test_input[1024] = {
   1970,    2674,    3278,    3699, 
   3887,    3831,    3558,    3128, 
   2621,    2114,    1677,    1351, 
   1150,    1060,    1051,    1082, 
   1119,    1146,    1163,    1192, 
   1265,    1418,    1671,    2027, 
   2460,    2918,    3331,    3627, 
   3739,    3630,    3294,    2768, 
   2119,    1442,     834,     386, 
    157,     173,     416,     833, 
   1348,    1876,    2339,    2682, 
   2878,    2935,    2883,    2767, 
   2635,    2522,    2444,    2395, 
   2350,    2276,    2140,    1925, 
   1636,    1302,     975,     719, 
    596,     650,     898,    1322, 
   1870,    2461,    3004,    3412, 
   3618,    3592,    3339,    2908, 
   2371,    1820,    1338,     993, 
    821,     824,     972,    1213, 
   1488,    1740,    1933,    2054, 
   2113,    2139,    2170,    2235, 
   2352,    2514,    2692,    2840, 
   2907,    2847,    2637,    2283, 
   1822,    1319,     854,     511, 
    357,     428,     723,    1203, 
   1794,    2405,    2942,    3326, 
   3507,    3474,    3251,    2892, 
   2467,    2050,    1699,    1451, 
   1314,    1269,    1284,    1318, 
   1340,    1336,    1311,    1291, 
   1315,    1421,    1636,    1963, 
   2379,    2831,    3248,    3555, 
   3683,    3589,    3268,    2752, 
   2107,    1426,     809,     345, 
    101,     101,     332,     746, 
   1268,    1813,    2304,    2685, 
   2928,    3034,    3030,    2957, 
   2856,    2758,    2677,    2603, 
   2514,    2376,    2163,    1861, 
   1482,    1065,     668,     363, 
    216,     276,     561,    1053, 
   1693,    2397,    3065,    3598, 
   3922,    3993,    3810,    3414, 
   2873,    2277,    1711,    1250, 
    936,     783,     774,     868, 
   1018,    1180,    1325,    1444, 
   1551,    1670,    1833,    2061, 
   2358,    2704,    3054,    3350, 
   3526,    3529,    3329,    2930, 
   2372,    1727,    1087,     548, 
    192,      72,     202,     556, 
   1071,    1663,    2238,    2716, 
   3040,    3188,    3168,    3020, 
   2797,    2556,    2343,    2181, 
   2073,    1999,    1927,    1824, 
   1670,    1464,    1228,    1004, 
    848,     812,     932,    1221, 
   1656,    2184,    2727,    3198, 
   3517,    3626,    3501,    3160, 
   2657,    2072,    1500,    1027, 
    720,     610,     695,     936, 
   1274,    1639,    1968,    2216, 
   2366,    2425,    2422,    2397, 
   2386,    2413,    2479,    2563, 
   2630,    2633,    2536,    2318, 
   1984,    1571,    1139,     764, 
    519,     462,     622,     989, 
   1517,    2128,    2728,    3224, 
   3542,    3636,    3504,    3177, 
   2720,    2212,    1734,    1350, 
   1100,     992,    1007,    1105, 
   1239,    1370,    1473,    1544, 
   1600,    1674,    1798,    1998, 
   2278,    2617,    2971,    3278, 
   3469,    3488,    3303,    2914, 
   2359,    1711,    1061,     508, 
    135,       0,     119,     469, 
    991,    1599,    2203,    2720, 
   3090,    3287,    3316,    3210, 
   3018,    2792,    2575,    2390, 
   2237,    2099,    1949,    1760, 
   1517,    1227,     921,     648, 
    468,     438,     596,     952, 
   1480,    2120,    2788,    3385, 
   3820,    4027,    3972,    3666, 
   3158,    2529,    1873,    1284, 
    835,     570,     497,     591, 
    805,    1079,    1359,    1606, 
   1803,    1955,    2086,    2223, 
   2393,    2603,    2841,    3073, 
   3249,    3315,    3228,    2964, 
   2534,    1980,    1372,     800, 
    354,     106,     101,     343, 
    794,    1386,    2024,    2615, 
   3075,    3350,    3421,    3305, 
   3049,    2718,    2377,    2080, 
   1860,    1722,    1650,    1611, 
   1569,    1498,    1390,    1257, 
   1133,    1064,    1094,    1255, 
   1555,    1970,    2450,    2921, 
   3304,    3525,    3536,    3322, 
   2909,    2358,    1753,    1189, 
    754,     509,     481,     659, 
    997,    1425,    1867,    2250, 
   2528,    2677,    2707,    2650, 
   2548,    2447,    2377,    2350, 
   2353,    2356,    2323,    2216, 
   2018,    1733,    1392,    1049, 
    771,     624,     657,     888, 
   1304,    1851,    2451,    3011, 
   3441,    3671,    3666,    3430, 
   3005,    2465,    1896,    1385, 
    999,     779,     730,     828, 
   1026,    1269,    1507,    1706, 
   1853,    1959,    2051,    2160, 
   2312,    2516,    2758,    3001, 
   3192,    3275,    3202,    2948, 
   2521,    1963,    1346,     760, 
    297,      34,      18,     256, 
    714,    1322,    1990,    2619, 
   3125,    3449,    3568,    3495, 
   3270,    2954,    2610,    2289, 
   2024,    1822,    1672,    1546, 
   1416,    1262,    1083,     901, 
    754,     690,     758,     986, 
   1379,    1907,    2511,    3108, 
   3607,    3926,    4007,    3828, 
};

// End of File
