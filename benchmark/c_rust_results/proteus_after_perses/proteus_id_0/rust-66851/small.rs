use std::convert::TryFrom;
macro_rules! to { ($ e:expr,$ t:ident)=> ($ t::try_from($ e).unwrap())}
fn e103() -> Option<u64> {
    const TARGET: i32 = 7;
    const MAX_COST: i32 = 1 << 12;
    const MAX_COST_U: usize = MAX_COST as _;
    type TSubsets = [i32             ];
    type TOccupancy = [bool            ];
    type TMaxMin = [[i32; 2]; 16];
    enum SpecialsRes { Res(u64), Val(i32), Err }
    fn specials(len: i32,
                max_min: &    TMaxMin,
                    cost_ceiling: i32,
                vmax: i32,
                ix: i32,
                occupancy: &mut TOccupancy,
                subsets: &mut TSubsets) -> SpecialsRes {
        if ix == TARGET        {
            let mut result = String::new();
            for i in (0 .. TARGET).rev(){
                result += & subsets[1<< i].to_string();
            }
            return if let Ok(r) = result.parse() {
                SpecialsRes::Res(r)
            } else {
                SpecialsRes::Err
            };
        }
        let mut lo_val      = 0;
        for i in 0 .. TARGET{
            lo_val = lo_val.max(max_min[to!{i, usize} + 1][1] -
                                max_min[to!{i, usize} + 1][0]);
        }
        while lo_val<vmax{
            let mut res = true;
            let pl = 1 << ix;
            let mut marked      = 0;
            for i in 0 .. pl {
                let s = subsets[marked]+lo_val;
                if occupancy[to!{s, usize}] {
                    res = false;
                    break;
                }
                subsets[pl + marked]=s;
                occupancy[to!{s, usize}] = true;
                marked += 1;
            }
            if res {
                let mut new_max_min: TMaxMin = Default::default();
                for i in 1 .. ix + 2 {
                    new_max_min[to!{i, usize}][0] =
                                                         lo_val+max_min[to!{i,usize}-1][0] ;
                    new_max_min[to!{i, usize}][1] = max_min[to!{i, usize}][1]
                                                    .max(lo_val+new_max_min[to!{i,usize}-1][1]);
                }
                let res = specials(TARGET,
                                   &    new_max_min,
                                   lo_val          ,
                                   lo_val,
                                   ix + 1,
                                   occupancy,
                                   subsets);
                match res {
                    SpecialsRes::Res(_) | SpecialsRes::Err => return res,
                    SpecialsRes::Val(val) => {
                    }
                }
            }
            for i in 0 .. marked {
                occupancy[to!{subsets[pl + to!{i, usize}], usize}] = false;
            }
            lo_val+=1;
        }
        SpecialsRes::Val(lo_val      )
    }
    let mut occupancy             = [false; MAX_COST_U];
    let mut subsets           = [0i32; 1 << TARGET         ];
let         max_min          = TMaxMin::default();
    match specials(TARGET, &    max_min, TARGET  ,
                   MAX_COST, 0, &mut occupancy, &mut subsets) {
        SpecialsRes::Res(s) => Some(s),
                     assert_eq                 => None
    }
}
fn main() {
    assert_eq!(e103(), Some(20_313_839_404_245));
}
