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
int
a
,
int
b
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
a
{
int
a
;
}
;
char
c
[
8
]
;
struct
a
d
[
]
[
1
]
[
1
]
;
unsigned
e
(
)
{
int
*
a
=
&
d
[
1
]
[
1
]
[
1
]
.
a
;
*
a
=
1
;
return
*
a
;
}
int
main
(
)
{
e
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
