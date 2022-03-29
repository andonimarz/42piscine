cat /etc/passwd 
| grep -Ev '#'						    # búsqueda inversa de '#'
| awk 'NR%2==0'						    # mostrar una de cada dos lineas empezando por la segunda
| awk -F ':' '{ print $1 }'			    # muestra la primera palabra considerando : el separador
| rev	    						    # invertir cada nombre de usuario
| sort -r						        # orden alabético inverso
| sed -n -e "${FT_LINE1},${FT_LINE2}p"	# para delarar las variables antes de ejecutar el archivo escribir export <nombre de variable> = lo que sea
| paste -sd , -	| sed 's/~/, /'		    # une las lineas. -s serial, -d delimitador
| awk '{print $1"."}'				    # imprime un punto