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
(
a
,
b
)
{
return
a
+
b
;
}
void
c
(
a
,
d
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
;
int
e
(
)
{
char
*
d
=
&
b
;
*
d
=
a
(
8
,
d
!=
&
b
)
;
return
*
d
;
}
int
main
(
)
{
int
a
=
e
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
