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
unsigned
c
;
unsigned
*
e
;
const
int
d
(
unsigned
,
char
,
int
,
short
)
;
unsigned
char
f
(
short
,
const
char
*
,
unsigned
,
char
*
,
unsigned
char
)
;
int
g
(
)
{
char
*
a
=
b
[
1
]
[
1
]
;
unsigned
b
=
d
(
1
,
*
a
,
c
,
c
)
;
return
b
;
}
const
int
d
(
unsigned
a
,
char
c
,
int
d
,
short
b
)
{
for
(
;
b
<=
1
;
b
+=
1
)
{
char
*
a
;
f
(
b
,
a
,
b
,
&
c
,
b
)
;
}
return
a
;
}
unsigned
char
f
(
short
a
,
const
char
*
b
,
unsigned
c
,
char
*
d
,
unsigned
char
f
)
{
unsigned
*
*
g
=
&
e
;
g
[
a
]
=
&
c
;
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
b
=
g
(
)
;
a
(
c
,
b
)
;
return
0
;
}
