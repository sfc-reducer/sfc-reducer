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
unsigned
a
;
unsigned
:
1
;
signed
b
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
static
int
f
(
)
{
struct
a
*
b
=
&
d
;
*
b
=
e
;
*
b
=
*
b
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
f
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
