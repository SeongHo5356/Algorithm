const filePath = process.platform === 'linux' ? '/dev/stdin' : './Javascript/input.txt';
const input = require('fs').readFileSync(filePath).toString().trim().split('\n');
const N = +input[0];
const buildings = input[1].split(' ').map(Number);
const views = Array(N).fill(0);

for (let i = 0; i < N; i++) {
    let left = Infinity;
    let right = -Infinity;
    const x1 = i;
    const y1 = buildings[i];
    for (let j = i - 1; j >= 0; j--) {
        const x2 = j;
        const y2 = buildings[j];
        const incline = (y2 - y1) / (x2 - x1);
        if (incline < left) {
            left = incline;
            views[i]++;
        }
    }
    for (let j = i + 1; j < N; j++) {
        const x2 = j;
        const y2 = buildings[j];
        const incline = (y2 - y1) / (x2 - x1);
        if (incline > right) {
            right = incline;
            views[i]++;
        }
    }
}

console.log(Math.max(...views));
