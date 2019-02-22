var arr1 = [
    [5,8,4],
    [4,6,2],
    [4,8,6],
    [1,2,4],
    [7,8,9]
]
var arr2 = [
    [5,8,4,7,8,2],
    [4,6,2,6,4,2],
    [4,8,6,8,9,3]
]
var res = [new Array(6),new Array(6),new Array(6),new Array(6),new Array(6)]
var t1 = new Date().getTime();
for (var i = 0; i < 10000; i++) {
    multiple(arr1, arr2)
}


var t2 = new Date().getTime();
console.log("程序执行毫秒：", t2 - t1)

function multiple (arr1, arr2) {
    var rowNum1 = arr1.length
    var rowNum2 = arr2.length
    var colNum2 = arr2[0].length
    for (var i = 0; i < rowNum1; i++) {
        for (var j = 0; j < colNum2; j++) {
            var temp = 0
            for (var k = 0; k < rowNum2; k++) {
                temp += arr1[i][k] * arr2[k][j] 
            }
            res[i][j] = temp
        }
    }
    // console.log(res)
}