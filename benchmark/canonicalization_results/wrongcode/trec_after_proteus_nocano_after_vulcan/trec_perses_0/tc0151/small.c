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
a
,
e
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
c
{
int
a
;
int
b
;
unsigned
d
;
char
c
;
char
e
;
int
f
;
}
;
union
a
{
struct
c
a
;
}
;
char
e
;
char
*
c
=
&
e
;
char
*
*
g
=
&
c
;
struct
c
h
;
struct
c
i
;
union
a
j
;
static
struct
c
*
f
=
&
h
;
union
a
k
;
static
short
l
(
char
)
;
static
unsigned
m
(
)
{
l
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
l
(
char
a
)
{
union
a
b
=
{
1
}
;
*
f
=
b
.
a
;
*
f
=
*
f
;
struct
c
d
=
{
1
}
;
struct
c
*
*
i
=
&
f
;
if
(
*
*
g
)
for
(
++
*
c
;
++
*
c
;
*
f
=
h
)
++
*
c
;
*
i
=
&
d
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
m
(
)
;
b
(
h
.
a
,
""
,
a
)
;
++
i
.
a
;
++
i
.
f
;
++
j
.
a
.
b
;
++
k
.
a
.
a
;
++
k
.
a
.
f
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
