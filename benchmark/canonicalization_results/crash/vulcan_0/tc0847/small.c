struct
S1
{
signed
f0
:
6
;
}
;
struct
S3
{
struct
S1
f8
;
}
;
union
{
volatile
struct
S3
f0
;
}
const
g_928
;
signed
main
(
)
{
main
(
g_928
.
f0
.
f8
.
f0
)
;
}
