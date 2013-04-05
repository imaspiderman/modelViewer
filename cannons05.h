const s32 obj[] = {774, //total number of vertex points
	2,
	-1608,1544,856,-1680,1552,856,
	-1680,1552,856,-1680,1480,856,
	-1680,1480,856,-1608,1480,856,
	-1608,1480,856,-1608,1544,856,
	-1608,1544,896,-1680,1552,896,
	-1680,1552,896,-1680,1552,856,
	-1608,1544,856,-1608,1544,896,
	-1608,1480,896,-1680,1480,896,
	-1680,1480,896,-1680,1552,896,
	-1608,1544,896,-1608,1480,896,
	-1680,1480,856,-1680,1480,896,
	-1608,1480,896,-1608,1480,856,
	-1680,1552,856,-1712,1528,856,
	-1712,1528,856,-1720,1496,856,
	-1720,1496,856,-1680,1480,856,
	-1680,1552,896,-1712,1528,896,
	-1712,1528,896,-1712,1528,856,
	-1680,1480,896,-1720,1496,896,
	-1720,1496,896,-1712,1528,896,
	-1720,1496,856,-1720,1496,896,
	-1712,1528,856,-1800,1536,856,
	-1800,1536,856,-1800,1496,856,
	-1800,1496,856,-1720,1496,856,
	-1712,1528,896,-1800,1536,896,
	-1800,1536,896,-1800,1536,856,
	-1720,1496,896,-1800,1496,896,
	-1800,1496,896,-1800,1536,896,
	-1800,1496,856,-1800,1496,896,
	-1800,1496,856,-1808,1504,864,
	-1808,1504,864,-1808,1504,888,
	-1808,1504,888,-1800,1496,896,
	-1808,1504,888,-1808,1528,888,
	-1808,1528,888,-1800,1536,896,
	-1808,1528,888,-1808,1528,864,
	-1808,1528,864,-1800,1536,856,
	-1808,1528,864,-1808,1504,864,
	-1808,1504,864,-1928,1504,864,
	-1928,1504,864,-1928,1504,888,
	-1928,1504,888,-1808,1504,888,
	-1928,1504,888,-1928,1528,888,
	-1928,1528,888,-1808,1528,888,
	-1928,1528,888,-1928,1528,864,
	-1928,1528,864,-1808,1528,864,
	-1928,1528,864,-1928,1504,864,
	-1608,1480,760,-1680,1480,760,
	-1680,1480,760,-1680,1552,760,
	-1680,1552,760,-1608,1544,760,
	-1608,1544,760,-1608,1480,760,
	-1680,1552,760,-1680,1552,712,
	-1680,1552,712,-1608,1544,712,
	-1608,1544,712,-1608,1544,760,
	-1680,1552,712,-1680,1480,712,
	-1680,1480,712,-1608,1480,712,
	-1608,1480,712,-1608,1544,712,
	-1680,1480,712,-1680,1480,760,
	-1608,1480,760,-1608,1480,712,
	-1680,1480,760,-1720,1496,752,
	-1720,1496,752,-1712,1528,752,
	-1712,1528,752,-1680,1552,760,
	-1712,1528,752,-1712,1528,720,
	-1712,1528,720,-1680,1552,712,
	-1712,1528,720,-1720,1496,720,
	-1720,1496,720,-1680,1480,712,
	-1720,1496,720,-1720,1496,752,
	-1720,1496,752,-1800,1496,752,
	-1800,1496,752,-1800,1536,752,
	-1800,1536,752,-1712,1528,752,
	-1800,1536,752,-1800,1536,720,
	-1800,1536,720,-1712,1528,720,
	-1800,1536,720,-1800,1496,720,
	-1800,1496,720,-1720,1496,720,
	-1800,1496,720,-1800,1496,752,
	-1800,1496,720,-1808,1504,728,
	-1808,1504,728,-1808,1504,752,
	-1808,1504,752,-1800,1496,752,
	-1800,1536,720,-1808,1528,728,
	-1808,1528,728,-1808,1504,728,
	-1800,1536,752,-1808,1528,752,
	-1808,1528,752,-1808,1528,728,
	-1808,1504,752,-1808,1528,752,
	-1808,1504,728,-1928,1504,728,
	-1928,1504,728,-1928,1504,752,
	-1928,1504,752,-1808,1504,752,
	-1808,1528,728,-1928,1528,728,
	-1928,1528,728,-1928,1504,728,
	-1808,1528,752,-1928,1528,752,
	-1928,1528,752,-1928,1528,728,
	-1928,1504,752,-1928,1528,752,
	-1360,1584,664,-1304,1312,624,
	-1304,1312,624,-1656,1312,624,
	-1656,1312,624,-1632,1448,640,
	-1632,1448,640,-1624,1480,648,
	-1624,1480,648,-1624,1512,648,
	-1624,1512,648,-1616,1544,656,
	-1616,1544,656,-1608,1584,664,
	-1608,1584,664,-1360,1584,664,
	-1608,1584,952,-1616,1544,952,
	-1616,1544,952,-1624,1512,960,
	-1624,1512,960,-1624,1480,968,
	-1624,1480,968,-1632,1448,968,
	-1632,1448,968,-1656,1312,992,
	-1656,1312,992,-1304,1312,992,
	-1304,1312,992,-1360,1584,952,
	-1360,1584,952,-1608,1584,952,
	-1360,1584,808,-1360,1584,952,
	-1304,1312,992,-1304,1312,808,
	-1304,1312,808,-1304,1312,624,
	-1360,1584,664,-1360,1584,808,
	-1608,1584,736,-1608,1584,808,
	-1608,1584,808,-1608,1584,880,
	-1608,1584,880,-1608,1584,952,
	-1608,1584,664,-1608,1584,736,
	-1304,1312,624,-1304,1312,992,
	-1656,1312,992,-1656,1312,624,
	-1656,1312,992,-1608,1584,952,
	-1608,1584,952,-1608,1584,664,
	-1608,1584,664,-1656,1312,624,
	-1304,1312,624,-1272,1176,600,
	-1272,1176,600,-1680,1176,600,
	-1680,1176,600,-1656,1312,624,
	-1656,1312,992,-1680,1176,1008,
	-1680,1176,1008,-1272,1176,1008,
	-1272,1176,1008,-1304,1312,992,
	-1680,1176,808,-1680,1176,1008,
	-1656,1312,992,-1656,1312,808,
	-1656,1312,808,-1656,1312,624,
	-1680,1176,600,-1680,1176,808,
	-1272,1176,1008,-1272,1176,808,
	-1272,1176,808,-1272,1176,600};
