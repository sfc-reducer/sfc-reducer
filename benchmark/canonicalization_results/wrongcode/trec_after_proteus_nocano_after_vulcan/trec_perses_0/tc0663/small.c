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
b
)
;
}
int
d
[
]
[
1
]
;
int
*
const
c
=
d
[
1
]
;
unsigned
e
;
short
f
(
unsigned
)
;
const
unsigned
char
g
(
unsigned
,
short
,
char
)
;
int
h
(
)
{
f
(
a
)
;
return
*
c
;
}
short
f
(
unsigned
a
)
{
return
g
(
a
,
a
,
a
)
;
}
const
unsigned
char
g
(
unsigned
a
,
short
b
,
char
d
)
{
return
++
*
c
;
}
int
main
(
)
{
int
a
=
h
(
)
;
b
(
a
,
e
)
;
return
0
;
}
