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
(
int
a
,
int
b
)
{
return
a
;
}
int
b
;
void
d
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
short
e
;
int
f
;
unsigned
char
g
(
unsigned
char
,
int
)
;
static
int
h
(
unsigned
char
)
;
unsigned
i
(
)
{
short
a
=
1
;
g
(
1
,
1
)
;
return
a
;
}
unsigned
char
g
(
unsigned
char
a
,
int
b
)
{
if
(
h
(
1
)
)
;
return
1
;
}
int
h
(
unsigned
char
c
)
{
unsigned
d
[
]
=
{
1
}
;
for
(
e
=
3
;
;
e
-=
1
)
{
f
=
d
[
e
]
<
a
(
e
&
2
||
(
b
=
c
)
,
1
)
;
if
(
f
)
;
else
return
b
;
}
}
int
main
(
)
{
int
a
=
1
;
i
(
)
;
d
(
b
,
a
)
;
return
0
;
}
