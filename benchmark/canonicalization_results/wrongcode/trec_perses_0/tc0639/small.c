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
c
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
int
*
d
=
&
a
;
int
i
[
]
[
1
]
;
unsigned
char
*
j
;
unsigned
char
*
*
k
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
j
,
&
j
}
;
unsigned
char
*
*
*
l
=
&
k
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
static
int
*
m
=
&
i
[
1
]
[
0
]
;
int
*
n
(
int
*
,
unsigned
char
)
;
int
*
o
(
)
;
unsigned
p
(
int
*
,
unsigned
,
int
)
;
unsigned
q
(
)
{
unsigned
a
=
1
;
int
*
*
c
=
&
d
;
n
(
o
(
p
(
&
a
,
a
,
a
)
)
,
*
*
*
l
)
;
return
*
*
c
;
}
int
*
n
(
int
*
a
,
unsigned
char
b
)
{
if
(
*
m
=
b
)
;
return
a
;
}
int
*
o
(
)
{
int
*
a
=
&
i
[
1
]
[
0
]
;
unsigned
*
b
=
d
;
*
b
=
*
a
;
return
a
;
}
unsigned
p
(
int
*
a
,
unsigned
b
,
int
c
)
{
*
m
=
b
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
q
(
)
;
c
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
