signed
printf
(
const
char
*
,
...
)
;
void
a
(
b
,
a
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
int
b
=
1
;
const
unsigned
char
c
=
0xE1
;
const
unsigned
char
*
const
d
=
&
c
;
short
e
(
int
*
,
int
,
unsigned
char
)
;
char
f
(
short
,
unsigned
short
,
int
*
,
int
*
)
;
unsigned
g
(
)
{
e
(
&
b
,
f
(
b
,
*
d
,
&
b
,
&
b
)
>
*
d
,
*
d
)
;
return
*
d
;
}
short
e
(
int
*
a
,
int
d
,
unsigned
char
c
)
{
char
b
=
*
a
&=
d
;
return
b
;
}
char
f
(
short
a
,
unsigned
short
c
,
int
*
d
,
int
*
e
)
{
return
a
;
}
int
main
(
)
{
int
c
=
g
(
)
;
a
(
b
,
b
)
;
return
0
;
}
