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
unsigned
c
,
char
*
b
,
int
d
)
{
a
+=
c
;
}
void
d
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
struct
a
{
int
b
;
unsigned
a
;
int
d
;
unsigned
c
;
char
e
;
}
;
union
c
{
struct
a
a
;
}
;
struct
a
e
;
static
struct
a
*
c
=
&
e
;
static
union
c
f
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
union
c
e
=
{
1
}
;
*
c
=
a
;
*
c
=
*
c
;
return
e
;
}
int
main
(
)
{
f
(
)
;
b
(
e
.
b
,
""
,
a
)
;
d
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
