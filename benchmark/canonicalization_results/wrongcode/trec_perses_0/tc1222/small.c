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
unsigned
b
,
char
*
c
,
int
d
)
{
a
+=
b
;
}
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
struct
a
{
int
a
;
unsigned
e
;
}
;
union
b
{
short
a
;
}
;
struct
a
d
;
struct
a
e
=
{
1
}
;
short
g
(
int
,
union
b
,
short
,
int
,
int
)
;
char
h
(
)
{
struct
a
a
=
{
1
}
;
char
b
=
1
;
union
b
e
=
{
1
}
;
d
.
a
=
g
(
b
,
e
,
b
,
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
short
g
(
int
a
,
union
b
b
,
short
c
,
int
f
,
int
g
)
{
e
=
d
;
e
=
e
;
return
e
.
a
;
}
int
main
(
)
{
h
(
)
;
b
(
d
.
a
,
""
,
a
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
