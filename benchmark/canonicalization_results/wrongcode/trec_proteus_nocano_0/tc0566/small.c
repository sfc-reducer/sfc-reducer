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
int
a
;
}
;
struct
b
{
struct
a
a
;
unsigned
b
;
}
;
struct
c
{
struct
b
a
;
}
;
union
d
{
struct
c
a
;
}
;
struct
b
d
;
union
d
e
;
struct
c
f
;
struct
b
g
(
)
{
int
*
a
=
&
f
.
a
.
a
.
a
;
for
(
e
.
a
.
a
.
a
.
a
=
2
;
e
.
a
.
a
.
a
.
a
;
--
e
.
a
.
a
.
a
.
a
)
{
int
*
b
=
&
d
.
a
.
a
;
for
(
f
.
a
.
b
=
0
;
!
f
.
a
.
b
;
++
a
)
++
*
a
;
int
*
*
c
=
&
a
;
*
c
=
b
;
}
return
e
.
a
.
a
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
b
(
d
.
a
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
