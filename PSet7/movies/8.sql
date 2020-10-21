/* 
  Coded by: (Github) @MattMarquise 
  For: CS50x 
*/

SELECT name from people
JOIN stars ON people.id = stars.person_id
JOIN movies ON stars.movie_id = movies.id
WHERE movies.title = "Toy Story";
