int
printf
(
const
char
*
,
...
)
;
int
a
;
void
b
(
__m128
,
__m128d
)
{
printf
(
"%x"
,
a
)
;
}
struct
c
{
int
a
;
char
__m128
;
}
;
char
c
(
)
{
struct
c
c
=
{
0
}
;
struct
c
*
b
=
&
c
;
int
*
d
=
&
a
;
int
*
e
[
]
[
1
]
[
1
]
=
{
&
c
.
a
}
;
*
b
=
c
;
a
=
c
.
a
;
int
*
*
a
=
e
[
1
]
[
1
]
;
++
*
a
;
return
*
d
;
}
char
main
(
)
{
c
(
)
;
b
(
a
,
a
)
;
return
0
;
}
