var t1 = new Date().getTime()
for(var i=0; i< 10000000; i++)
{
}
var t2 = new Date().getTime()

console.log('程序执行时间:%dms', t2 - t1)