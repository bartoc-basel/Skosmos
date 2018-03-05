{# This is the template for the front page welcome box. You can enter any html here and show different language versions by using the lang value in a twig conditional as demonstrated below. #}
<div class="welcome-box">
  {% if request.lang == 'en' %}
  <h1>Welcome to the BARTOC Skosmos Browser!</h1>
  <p>BARTOC Skosmos Browser provides access to SKOS concepts & vocabularies via BARTOC's SPARQL endpoint.</p>
  {% endif %}
</div>
