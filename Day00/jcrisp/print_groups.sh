if	[ "$FT_USER" ]; then
	groups $FT_USER | tr " " "," | tr -d "\n"
fi
