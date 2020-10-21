/* 
  Coded by: (Github) @MattMarquise 
  For: CS50x 
*/

SELECT COUNT(title) FROM movies
JOIN ratings on movies.id = ratings.movie_id
WHERE rating = 10;
