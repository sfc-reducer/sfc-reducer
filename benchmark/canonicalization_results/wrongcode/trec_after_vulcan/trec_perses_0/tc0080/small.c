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
a
)
;
}
struct
b
{
unsigned
a
;
signed
b
;
}
c
;
struct
b
d
=
{
1
}
;
short
e
(
unsigned
,
struct
b
)
;
struct
b
f
(
unsigned
,
int
)
;
unsigned
g
(
)
{
e
(
a
,
c
)
;
return
d
.
a
;
}
short
e
(
unsigned
b
,
struct
b
a
)
{
f
(
b
,
a
.
a
)
;
return
a
.
a
;
}
struct
b
f
(
unsigned
b
,
int
a
)
{
struct
b
e
[
]
=
{
1
}
;
d
=
c
;
d
=
d
;
return
e
[
1
]
;
}
int
main
(
)
{
int
d
=
g
(
)
;
b
(
d
,
a
)
;
return
0
;
}
