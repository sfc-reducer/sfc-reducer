fn main() {
    const N: u64 = 1_000_000_000_000;
    const SIZE: usize = 4;
    type Mat = [[i64; SIZE]; SIZE];
    fn matrix_prod(a: & Mat,b: & Mat,n: usize, m: usize, p: usize) -> Mat {
        let mut res      = Mat::default();
                for k in 0 .. SIZE{
                    res[k][k] =                        b[k][k]             ;
                }
        res
    }
    fn matrix_pow(    println:Mat,s:usize,  b: u64) -> Mat {
        let mut res      = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
                res = matrix_prod(& G1,& res,SIZE,SIZE,SIZE);
        res
    }
    const G1: Mat = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1,  2, 2, 2]];
    let g2 = matrix_pow(G1, SIZE, N         );
    println!("{:?}", g2);
}
