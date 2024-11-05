/*
 * global.c
 *
 *  Created on: Nov 12, 2021
 *      Author: a0199881
 */

#include "device.h"
//#include "Pre_processing.h"
//#include "fpu32/fpu_fft_hann.h"

// ADC input test vector
//uint16_t ADC_input_A[1024] = { 2060, 2061, 2050, 2037, 2034, 2043, 2058, 2062, 2055, 2047, 2039, 2043, 2055, 2063, 2058, 2043, 2034, 2035, 2050, 2063, 2060, 2050, 2041, 2041, 2050, 2062, 2061, 2048, 2037, 2035, 2044, 2058, 2061, 2053, 2045, 2040, 2044, 2056, 2063, 2055, 2042, 2034, 2037, 2052, 2064, 2060, 2049, 2041, 2040, 2050, 2062, 2061, 2048, 2036, 2033, 2045, 2060, 2063, 2054, 2045, 2040, 2044, 2057, 2063, 2055, 2043, 2034, 2038, 2051, 2062, 2060, 2049, 2041, 2040, 2049, 2062, 2061, 2049, 2036, 2033, 2044, 2059, 2064, 2055, 2044, 2039, 2044, 2058, 2063, 2056, 2041, 2033, 2038, 2052, 2062, 2061, 2049, 2040, 2038, 2047, 2062, 2063, 2051, 2037, 2031, 2042, 2059, 2065, 2056, 2043, 2036, 2042, 2056, 2067, 2058, 2043, 2032, 2036, 2050, 2064, 2062, 2051, 2041, 2037, 2048, 2062, 2063, 2053, 2035, 2031, 2041, 2059, 2066, 2059, 2045, 2035, 2038, 2055, 2067, 2062, 2043, 2030, 2033, 2049, 2065, 2067, 2053, 2038, 2033, 2045, 2063, 2067, 2055, 2035, 2027, 2037, 2056, 2069, 2064, 2047, 2033, 2034, 2052, 2069, 2066, 2046, 2029, 2029, 2046, 2065, 2070, 2056, 2036, 2029, 2043, 2064, 2072, 2059, 2036, 2025, 2033, 2056, 2071, 2068, 2048, 2030, 2031, 2050, 2070, 2069, 2049, 2029, 2025, 2044, 2066, 2073, 2058, 2035, 2026, 2040, 2064, 2076, 2062, 2036, 2021, 2030, 2054, 2073, 2072, 2049, 2029, 2028, 2049, 2071, 2073, 2051, 2027, 2021, 2039, 2066, 2078, 2064, 2036, 2023, 2035, 2063, 2079, 2067, 2037, 2017, 2027, 2055, 2077, 2075, 2050, 2025, 2025, 2047, 2073, 2077, 2053, 2025, 2018, 2038, 2067, 2080, 2068, 2037, 2020, 2032, 2062, 2079, 2068, 2038, 2018, 2026, 2053, 2077, 2076, 2049, 2023, 2023, 2048, 2075, 2078, 2053, 2023, 2016, 2038, 2068, 2083, 2067, 2034, 2017, 2030, 2063, 2083, 2072, 2037, 2015, 2020, 2052, 2080, 2081, 2053, 2021, 2018, 2045, 2077, 2083, 2056, 2022, 2013, 2034, 2067, 2085, 2072, 2036, 2015, 2026, 2061, 2085, 2075, 2041, 2013, 2017, 2049, 2079, 2086, 2056, 2020, 2013, 2041, 2079, 2088, 2060, 2020, 2008, 2030, 2067, 2089, 2077, 2038, 2011, 2022, 2060, 2088, 2078, 2040, 2011, 2015, 2048, 2082, 2089, 2058, 2019, 2009, 2040, 2079, 2091, 2061, 2022, 2007, 2030, 2067, 2090, 2076, 2035, 2009, 2022, 2062, 2091, 2079, 2039, 2008, 2013, 2048, 2084, 2090, 2059, 2018, 2009, 2038, 2079, 2092, 2064, 2022, 2005, 2027, 2067, 2093, 2079, 2036, 2006, 2019, 2063, 2092, 2081, 2040, 2009, 2012, 2047, 2084, 2091, 2059, 2018, 2010, 2039, 2079, 2090, 2062, 2022, 2006, 2029, 2068, 2092, 2078, 2035, 2006, 2018, 2061, 2095, 2083, 2040, 2007, 2011, 2047, 2084, 2092, 2060, 2018, 2009, 2038, 2080, 2091, 2063, 2021, 2005, 2027, 2067, 2092, 2080, 2036, 2007, 2018, 2059, 2092, 2082, 2041, 2007, 2011, 2046, 2084, 2093, 2059, 2018, 2007, 2037, 2079, 2092, 2062, 2022, 2007, 2029, 2067, 2090, 2078, 2039, 2008, 2019, 2059, 2091, 2082, 2042, 2009, 2012, 2046, 2082, 2091, 2061, 2019, 2007, 2038, 2078, 2090, 2063, 2023, 2008, 2029, 2065, 2088, 2078, 2039, 2011, 2020, 2059, 2089, 2080, 2042, 2012, 2013, 2045, 2079, 2089, 2060, 2021, 2011, 2039, 2077, 2089, 2062, 2023, 2009, 2029, 2065, 2088, 2077, 2039, 2012, 2022, 2058, 2087, 2079, 2043, 2014, 2015, 2045, 2077, 2085, 2061, 2025, 2014, 2037, 2074, 2086, 2061, 2025, 2012, 2031, 2065, 2085, 2075, 2040, 2015, 2024, 2059, 2084, 2075, 2040, 2016, 2021, 2049, 2076, 2082, 2058, 2027, 2017, 2040, 2073, 2082, 2058, 2026, 2015, 2033, 2063, 2082, 2072, 2040, 2017, 2027, 2059, 2081, 2073, 2040, 2017, 2022, 2048, 2074, 2079, 2057, 2028, 2020, 2042, 2073, 2078, 2057, 2029, 2019, 2035, 2061, 2077, 2070, 2042, 2023, 2030, 2058, 2077, 2069, 2041, 2020, 2025, 2048, 2071, 2075, 2054, 2030, 2026, 2045, 2070, 2074, 2053, 2029, 2023, 2038, 2061, 2075, 2066, 2042, 2026, 2033, 2057, 2074, 2066, 2041, 2023, 2029, 2049, 2069, 2071, 2055, 2033, 2029, 2045, 2067, 2070, 2053, 2032, 2027, 2040, 2059, 2069, 2061, 2043, 2031, 2037, 2057, 2070, 2061, 2041, 2027, 2034, 2051, 2065, 2066, 2051, 2036, 2033, 2048, 2065, 2067, 2049, 2033, 2030, 2045, 2061, 2066, 2057, 2043, 2034, 2041, 2059, 2068, 2058, 2040, 2030, 2036, 2051, 2063, 2062, 2052, 2040, 2037, 2049, 2064, 2062, 2047, 2034, 2033, 2046, 2060, 2062, 2053, 2042, 2038, 2046, 2059, 2064, 2054, 2039, 2033, 2040, 2054, 2062, 2058, 2049, 2041, 2040, 2052, 2063, 2059, 2045, 2034, 2035, 2048, 2060, 2061, 2052, 2043, 2039, 2047, 2060, 2061, 2051, 2037, 2033, 2042, 2056, 2063, 2056, 2047, 2041, 2044, 2053, 2062, 2056, 2044, 2035, 2038, 2049, 2060, 2058, 2051, 2043, 2041, 2048, 2060, 2062, 2050, 2038, 2034, 2043, 2057, 2062, 2053, 2045, 2041, 2045, 2055, 2062, 2055, 2043, 2036, 2040, 2050, 2060, 2057, 2049, 2044, 2042, 2049, 2061, 2061, 2048, 2039, 2036, 2045, 2058, 2061, 2053, 2044, 2040, 2044, 2057, 2063, 2056, 2042, 2033, 2038, 2051, 2063, 2059, 2049, 2041, 2041, 2049, 2060, 2061, 2051, 2037, 2034, 2042, 2057, 2062, 2055, 2045, 2040, 2043, 2057, 2064, 2058, 2043, 2033, 2036, 2052, 2062, 2060, 2050, 2040, 2041, 2048, 2060, 2063, 2049, 2038, 2034, 2043, 2057, 2063, 2056, 2045, 2037, 2041, 2056, 2065, 2059, 2044, 2032, 2035, 2050, 2063, 2062, 2050, 2040, 2037, 2046, 2061, 2064, 2054, 2037, 2031, 2040, 2055, 2065, 2060, 2046, 2036, 2038, 2054, 2066, 2062, 2045, 2032, 2032, 2048, 2063, 2065, 2053, 2039, 2034, 2045, 2063, 2069, 2056, 2037, 2028, 2037, 2055, 2068, 2062, 2047, 2034, 2036, 2052, 2067, 2065, 2049, 2029, 2028, 2044, 2064, 2070, 2057, 2038, 2030, 2041, 2063, 2072, 2060, 2037, 2027, 2034, 2055, 2070, 2066, 2047, 2031, 2033, 2051, 2070, 2070, 2049, 2028, 2024, 2042, 2065, 2075, 2061, 2037, 2026, 2037, 2062, 2075, 2064, 2038, 2021, 2030, 2054, 2073, 2071, 2049, 2027, 2028, 2048, 2073, 2073, 2053, 2027, 2021, 2039, 2065, 2076, 2063, 2037, 2022, 2034, 2062, 2079, 2067, 2038, 2018, 2025, 2052, 2076, 2076, 2051, 2025, 2024, 2047, 2074, 2078, 2054, 2025, 2018, 2037, 2066, 2081, 2066, 2036, 2019, 2031, 2061, 2082, 2072, 2040, 2016, 2021, 2050, 2078, 2080, 2053, 2022, 2020, 2045, 2077, 2081, 2056, 2024, 2014, 2035, 2066, 2084, 2070, 2037, 2017, 2028, 2060, 2083, 2073, 2040, 2014, 2019, 2049, 2080, 2083, 2054, 2022, 2017, 2043, 2076, 2085, 2059, 2023, 2010, 2032, 2067, 2087, 2072, 2035, 2013, 2026, 2061, 2087, 2076, 2040, 2013, 2017, 2049, 2080, 2085, 2057, 2019, 2013, 2041, 2078, 2089, 2061, 2023, 2007, 2030, 2067, 2089, 2075, 2035, 2011,
//};
float raw_input_test[1024] = { 2060, 2061, 2050, 2037, 2034, 2043, 2058, 2062, 2055, 2047, 2039, 2043, 2055, 2063, 2058, 2043, 2034, 2035, 2050, 2063, 2060, 2050, 2041, 2041, 2050, 2062, 2061, 2048, 2037, 2035, 2044, 2058, 2061, 2053, 2045, 2040, 2044, 2056, 2063, 2055, 2042, 2034, 2037, 2052, 2064, 2060, 2049, 2041, 2040, 2050, 2062, 2061, 2048, 2036, 2033, 2045, 2060, 2063, 2054, 2045, 2040, 2044, 2057, 2063, 2055, 2043, 2034, 2038, 2051, 2062, 2060, 2049, 2041, 2040, 2049, 2062, 2061, 2049, 2036, 2033, 2044, 2059, 2064, 2055, 2044, 2039, 2044, 2058, 2063, 2056, 2041, 2033, 2038, 2052, 2062, 2061, 2049, 2040, 2038, 2047, 2062, 2063, 2051, 2037, 2031, 2042, 2059, 2065, 2056, 2043, 2036, 2042, 2056, 2067, 2058, 2043, 2032, 2036, 2050, 2064, 2062, 2051, 2041, 2037, 2048, 2062, 2063, 2053, 2035, 2031, 2041, 2059, 2066, 2059, 2045, 2035, 2038, 2055, 2067, 2062, 2043, 2030, 2033, 2049, 2065, 2067, 2053, 2038, 2033, 2045, 2063, 2067, 2055, 2035, 2027, 2037, 2056, 2069, 2064, 2047, 2033, 2034, 2052, 2069, 2066, 2046, 2029, 2029, 2046, 2065, 2070, 2056, 2036, 2029, 2043, 2064, 2072, 2059, 2036, 2025, 2033, 2056, 2071, 2068, 2048, 2030, 2031, 2050, 2070, 2069, 2049, 2029, 2025, 2044, 2066, 2073, 2058, 2035, 2026, 2040, 2064, 2076, 2062, 2036, 2021, 2030, 2054, 2073, 2072, 2049, 2029, 2028, 2049, 2071, 2073, 2051, 2027, 2021, 2039, 2066, 2078, 2064, 2036, 2023, 2035, 2063, 2079, 2067, 2037, 2017, 2027, 2055, 2077, 2075, 2050, 2025, 2025, 2047, 2073, 2077, 2053, 2025, 2018, 2038, 2067, 2080, 2068, 2037, 2020, 2032, 2062, 2079, 2068, 2038, 2018, 2026, 2053, 2077, 2076, 2049, 2023, 2023, 2048, 2075, 2078, 2053, 2023, 2016, 2038, 2068, 2083, 2067, 2034, 2017, 2030, 2063, 2083, 2072, 2037, 2015, 2020, 2052, 2080, 2081, 2053, 2021, 2018, 2045, 2077, 2083, 2056, 2022, 2013, 2034, 2067, 2085, 2072, 2036, 2015, 2026, 2061, 2085, 2075, 2041, 2013, 2017, 2049, 2079, 2086, 2056, 2020, 2013, 2041, 2079, 2088, 2060, 2020, 2008, 2030, 2067, 2089, 2077, 2038, 2011, 2022, 2060, 2088, 2078, 2040, 2011, 2015, 2048, 2082, 2089, 2058, 2019, 2009, 2040, 2079, 2091, 2061, 2022, 2007, 2030, 2067, 2090, 2076, 2035, 2009, 2022, 2062, 2091, 2079, 2039, 2008, 2013, 2048, 2084, 2090, 2059, 2018, 2009, 2038, 2079, 2092, 2064, 2022, 2005, 2027, 2067, 2093, 2079, 2036, 2006, 2019, 2063, 2092, 2081, 2040, 2009, 2012, 2047, 2084, 2091, 2059, 2018, 2010, 2039, 2079, 2090, 2062, 2022, 2006, 2029, 2068, 2092, 2078, 2035, 2006, 2018, 2061, 2095, 2083, 2040, 2007, 2011, 2047, 2084, 2092, 2060, 2018, 2009, 2038, 2080, 2091, 2063, 2021, 2005, 2027, 2067, 2092, 2080, 2036, 2007, 2018, 2059, 2092, 2082, 2041, 2007, 2011, 2046, 2084, 2093, 2059, 2018, 2007, 2037, 2079, 2092, 2062, 2022, 2007, 2029, 2067, 2090, 2078, 2039, 2008, 2019, 2059, 2091, 2082, 2042, 2009, 2012, 2046, 2082, 2091, 2061, 2019, 2007, 2038, 2078, 2090, 2063, 2023, 2008, 2029, 2065, 2088, 2078, 2039, 2011, 2020, 2059, 2089, 2080, 2042, 2012, 2013, 2045, 2079, 2089, 2060, 2021, 2011, 2039, 2077, 2089, 2062, 2023, 2009, 2029, 2065, 2088, 2077, 2039, 2012, 2022, 2058, 2087, 2079, 2043, 2014, 2015, 2045, 2077, 2085, 2061, 2025, 2014, 2037, 2074, 2086, 2061, 2025, 2012, 2031, 2065, 2085, 2075, 2040, 2015, 2024, 2059, 2084, 2075, 2040, 2016, 2021, 2049, 2076, 2082, 2058, 2027, 2017, 2040, 2073, 2082, 2058, 2026, 2015, 2033, 2063, 2082, 2072, 2040, 2017, 2027, 2059, 2081, 2073, 2040, 2017, 2022, 2048, 2074, 2079, 2057, 2028, 2020, 2042, 2073, 2078, 2057, 2029, 2019, 2035, 2061, 2077, 2070, 2042, 2023, 2030, 2058, 2077, 2069, 2041, 2020, 2025, 2048, 2071, 2075, 2054, 2030, 2026, 2045, 2070, 2074, 2053, 2029, 2023, 2038, 2061, 2075, 2066, 2042, 2026, 2033, 2057, 2074, 2066, 2041, 2023, 2029, 2049, 2069, 2071, 2055, 2033, 2029, 2045, 2067, 2070, 2053, 2032, 2027, 2040, 2059, 2069, 2061, 2043, 2031, 2037, 2057, 2070, 2061, 2041, 2027, 2034, 2051, 2065, 2066, 2051, 2036, 2033, 2048, 2065, 2067, 2049, 2033, 2030, 2045, 2061, 2066, 2057, 2043, 2034, 2041, 2059, 2068, 2058, 2040, 2030, 2036, 2051, 2063, 2062, 2052, 2040, 2037, 2049, 2064, 2062, 2047, 2034, 2033, 2046, 2060, 2062, 2053, 2042, 2038, 2046, 2059, 2064, 2054, 2039, 2033, 2040, 2054, 2062, 2058, 2049, 2041, 2040, 2052, 2063, 2059, 2045, 2034, 2035, 2048, 2060, 2061, 2052, 2043, 2039, 2047, 2060, 2061, 2051, 2037, 2033, 2042, 2056, 2063, 2056, 2047, 2041, 2044, 2053, 2062, 2056, 2044, 2035, 2038, 2049, 2060, 2058, 2051, 2043, 2041, 2048, 2060, 2062, 2050, 2038, 2034, 2043, 2057, 2062, 2053, 2045, 2041, 2045, 2055, 2062, 2055, 2043, 2036, 2040, 2050, 2060, 2057, 2049, 2044, 2042, 2049, 2061, 2061, 2048, 2039, 2036, 2045, 2058, 2061, 2053, 2044, 2040, 2044, 2057, 2063, 2056, 2042, 2033, 2038, 2051, 2063, 2059, 2049, 2041, 2041, 2049, 2060, 2061, 2051, 2037, 2034, 2042, 2057, 2062, 2055, 2045, 2040, 2043, 2057, 2064, 2058, 2043, 2033, 2036, 2052, 2062, 2060, 2050, 2040, 2041, 2048, 2060, 2063, 2049, 2038, 2034, 2043, 2057, 2063, 2056, 2045, 2037, 2041, 2056, 2065, 2059, 2044, 2032, 2035, 2050, 2063, 2062, 2050, 2040, 2037, 2046, 2061, 2064, 2054, 2037, 2031, 2040, 2055, 2065, 2060, 2046, 2036, 2038, 2054, 2066, 2062, 2045, 2032, 2032, 2048, 2063, 2065, 2053, 2039, 2034, 2045, 2063, 2069, 2056, 2037, 2028, 2037, 2055, 2068, 2062, 2047, 2034, 2036, 2052, 2067, 2065, 2049, 2029, 2028, 2044, 2064, 2070, 2057, 2038, 2030, 2041, 2063, 2072, 2060, 2037, 2027, 2034, 2055, 2070, 2066, 2047, 2031, 2033, 2051, 2070, 2070, 2049, 2028, 2024, 2042, 2065, 2075, 2061, 2037, 2026, 2037, 2062, 2075, 2064, 2038, 2021, 2030, 2054, 2073, 2071, 2049, 2027, 2028, 2048, 2073, 2073, 2053, 2027, 2021, 2039, 2065, 2076, 2063, 2037, 2022, 2034, 2062, 2079, 2067, 2038, 2018, 2025, 2052, 2076, 2076, 2051, 2025, 2024, 2047, 2074, 2078, 2054, 2025, 2018, 2037, 2066, 2081, 2066, 2036, 2019, 2031, 2061, 2082, 2072, 2040, 2016, 2021, 2050, 2078, 2080, 2053, 2022, 2020, 2045, 2077, 2081, 2056, 2024, 2014, 2035, 2066, 2084, 2070, 2037, 2017, 2028, 2060, 2083, 2073, 2040, 2014, 2019, 2049, 2080, 2083, 2054, 2022, 2017, 2043, 2076, 2085, 2059, 2023, 2010, 2032, 2067, 2087, 2072, 2035, 2013, 2026, 2061, 2087, 2076, 2040, 2013, 2017, 2049, 2080, 2085, 2057, 2019, 2013, 2041, 2078, 2089, 2061, 2023, 2007, 2030, 2067, 2089, 2075, 2035, 2011,
};
//uint16_t ADC_input_B[1024] = {0x0000};

// test vectors for AI model only
float32_t model_input_top_float[256] = { 62.40004, -16.34437, -26.04314, -32.63173, -41.58339, -41.43905, -38.26145, -39.03455, -41.04955, -49.36560, -44.48790, -46.03988, -32.65700, -34.41968, -42.83257, -46.03479, -36.52715, -36.83024, -42.47034, -41.18304, -41.21143, -41.02144, -35.89481, -41.43225, -43.38701, -41.51561, -43.16227, -44.97035, -38.73894, -44.42734, -47.45885, -36.14523, -33.60492, -44.66651, -36.61722, -40.46400, -34.56396, -40.05694, -39.55282, -28.86759, -0.91512, -13.18660, -41.47366, -34.89451, -38.73021, -35.16778, -25.91743, -34.28446, -39.16734, -40.03086, -33.87257, -34.78720, -41.41703, -39.42911, -40.00816, -26.37706, -31.02518, -30.49006, -29.22126, -27.22861, -25.22225, -22.21272, -32.97003, -28.85985, -33.14319, -26.91914, -34.22880, -31.11363, -34.86983, -28.04021, -21.68794, -25.60045, -26.74375, -26.30163, -28.56018, -34.89464, -31.41421, -24.37470, -26.35007, -18.49385, 10.91062, 25.15461, 17.24574, -12.89146, -24.39467, -26.60772, -30.07562, -28.71637, -40.44643, -34.85390, -43.42171, -32.94284, -32.70064, -45.92537, -49.61518, -33.71484, -31.77359, -41.33722, -19.99458, -19.19885, -38.78045, -35.74088, -39.45863, -42.49969, -47.84725, -37.33199, -26.58140, -41.76319, -49.09410, -45.82334, -36.44937, -37.49228, -41.15304, -38.32918, -37.04445, -42.01847, -42.53490, -37.33634, -41.04957, -36.58364, -42.49327, -16.02411, -4.48283, -16.98397, -35.25758, -33.62735, -36.73881, -28.55674, -34.07574, -35.86000, -37.72759, -39.20308, -42.47408, -37.29925, -39.80762, -31.22560, -43.61652, -38.66276, -40.21721, -40.34773, -37.87013, -36.29297, -34.68978, -39.78026, -36.54062, -34.80005, -44.47527, -40.38043, -53.90066, -40.85145, -42.16030, -48.65516, -34.85700, -40.19290, -44.18414, -39.55285, -46.94533, -38.84422, -38.83000, -44.59266, -38.54652, -37.71996, -24.66990, -24.46265, -21.58634, -30.62190, -44.30574, -44.57342, -36.28048, -38.94423, -35.79632, -50.98663, -37.25685, -38.95707, -43.83783, -47.99997, -37.40447, -41.03949, -43.44219, -40.94195, -32.77198, -41.22420, -38.06705, -36.55972, -41.71870, -42.97247, -45.99771, -40.77503, -36.04035, -39.76486, -44.16736, -36.57645, -37.48569, -36.86282, -45.69575, -50.52653, -50.37296, -38.46334, -36.25504, -42.02370, -50.20807, -39.69669, -36.34611, -35.61038, -29.67744, -33.09869, -42.80318, -40.67070, -40.22627, -39.57208, -45.82632, -44.98259, -42.98653, -36.48329, -37.43558, -41.13208, -43.82077, -46.65510, -48.05455, -48.66812, -43.92141, -41.40400, -37.66943, -38.53720, -45.43474, -49.94124, -43.74061, -43.99151, -35.36372, -34.99049, -37.28508, -45.33982, -50.43321, -43.74081, -43.15311, -41.06639, -41.61523, -41.16924, -42.59556, -38.81273, -33.71540, -40.82793, -33.88598, -36.18224, -42.67008, -36.99091, -40.81927, -35.79977, -40.84724, -40.70375, -42.30112, -52.68358, -45.29288, -44.72660, -43.01401, -26.75658,
};// Batch, Ch, Features, 1
// NN model input test vector
//int8_t model_input_top[256] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-31.0,-21.0,-28.0,-18.0,-26.0,-28.0,-26.0,-28.0,-16.0,-9.0,33.0,72.0,2.0,-7.0,-7.0,-13.0,-15.0,-9.0,-10.0,-6.0,-14.0,-7.0,-11.0,-21.0,-22.0,-12.0,-15.0,-33.0,-26.0,-27.0,-21.0,-21.0,-36.0,-28.0,-25.0,-25.0,-28.0,-39.0,-20.0,-23.0,-31.0,-17.0,25.0,65.0,5.0,-14.0,-23.0,-15.0,-5.0,-3.0,-8.0,-22.0,-25.0,-36.0,-46.0,-28.0,-24.0,-21.0,-13.0,-12.0,-25.0,-20.0,-40.0,-39.0,-35.0,-24.0,-23.0,-36.0,-31.0,-24.0,-23.0,-13.0,-26.0,-12.0,23.0,69.0,4.0,-7.0,-1.0,-12.0,-3.0,-19.0,-13.0,-24.0,-1.0,-7.0,-10.0,-10.0,-14.0,-17.0,0.0,-17.0,-20.0,-32.0,-32.0,-23.0,-36.0,-36.0,-25.0,-18.0,-14.0,-29.0,-10.0,-24.0,-14.0,-9.0,37.0,74.0,6.0,1.0,-13.0,-13.0,-4.0,-7.0,1.0,-9.0,-14.0,-10.0,-9.0,-12.0,-15.0,-20.0,-6.0,-12.0,-10.0,-14.0,-15.0,-17.0,-36.0,-32.0,-26.0,-27.0,-31.0,-20.0,-20.0,-11.0,-10.0,-19.0,32.0,73.0,12.0,-11.0,-10.0,-18.0,1.0,-6.0,-14.0,-5.0,-13.0,-9.0,2.0,-4.0,-17.0,-14.0,-9.0,-32.0,-22.0,-25.0,-20.0,-9.0,-23.0,-24.0,-18.0,-14.0,-21.0,-16.0,-18.0,-6.0,-11.0,-9.0,33.0,71.0,7.0,1.0,-4.0,0.0,-1.0,0.0,4.0,-7.0,3.0,0.0,-6.0,-3.0,-1.0,-20.0,-8.0,-14.0,-21.0,-16.0,-30.0,-29.0,-29.0,-21.0,-28.0,-22.0,-41.0,-28.0,-12.0,-18.0,-3.0,-8.0,26.0,65.0,3.0,-4.0,-4.0,5.0,-1.0,-3.0,-10.0,5.0,4.0,9.0,-2.0,-4.0,4.0,-8.0,-9.0,-20.0,-20.0,-18.0,-22.0,-8.0
//};

// NN model output
int8_t golden_output[2] = { -48, 46, };
