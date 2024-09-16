fn main ( ) {
           [ 1 ; < Multiply < Five , Five > > :: VAL ] ;
}
trait TypeVal < T > {
const VAL : usize;
}
struct Five ;
struct Multiply < N , M > {
_n : PhantomData
}
impl < N     > TypeVal < N     > for Multiply < N , N >
where N : TypeVal < VAL >
{
}
