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
signed
a
;
}
;
struct
a
d
[
]
=
{
1
}
;
struct
a
e
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
f
(
)
{
struct
a
*
a
=
d
;
struct
a
*
b
=
&
e
[
1
]
[
1
]
[
1
]
;
*
b
=
*
a
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
int
i
,
k
;
f
(
)
;
for
(
i
=
0
;
a
<
1
;
)
for
(
;
a
<
2
;
)
for
(
k
=
1
;
k
<
6
;
k
++
)
b
(
e
[
i
]
[
i
]
[
k
]
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
