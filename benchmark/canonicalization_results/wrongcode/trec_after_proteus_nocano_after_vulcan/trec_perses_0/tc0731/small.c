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
char
b
[
]
[
1
]
[
1
]
;
static
char
*
c
=
&
b
[
1
]
[
0
]
[
1
]
;
unsigned
d
;
static
unsigned
e
;
int
f
(
short
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
for
(
e
=
1
;
e
<=
10
;
e
++
)
*
c
=
f
(
d
,
&
d
)
;
return
*
c
;
}
int
f
(
short
a
,
int
*
c
)
{
for
(
d
=
0
;
!
d
;
d
++
)
if
(
b
[
1
]
[
0
]
[
1
]
)
break
;
return
1
;
}
int
main
(
)
{
g
(
)
;
a
(
d
,
d
)
;
return
0
;
}
