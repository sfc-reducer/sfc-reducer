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
a
,
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
int
b
;
short
c
;
int
d
;
}
;
struct
a
c
=
{
1
}
;
int
d
(
char
,
struct
a
)
;
char
e
(
)
{
return
d
(
1
,
c
)
;
}
int
d
(
char
b
,
struct
a
d
)
{
int
*
e
=
&
a
;
char
*
a
=
&
b
;
*
e
=
__alignof__
(
c
)
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
