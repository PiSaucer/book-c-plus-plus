---
layout: search
title: Search
search: false
---

# Search

<div style="justify-content: flex-end;">{% include search-lunr.html %}</div>

<div id="lunrsearchresults">
    <ul></ul>
</div>

<script>
  // Function to get the value of a query variable from the URL
  function getQueryVariable(variable) {
    const query = window.location.search.substring(1);
    const vars = query.split("&");
    for (let i = 0; i < vars.length; i++) {
      const pair = vars[i].split("=");
      if (pair[0] === variable) {
        return decodeURIComponent(pair[1]);
      }
    }
    return null;
  }

  // Get the query variable from the URL
  const queryValue = getQueryVariable('query');

  // Set the query value as the value of the input field
  const lunrsearch = document.getElementById('lunrsearch');
  if (queryValue !== null) {
    lunrsearch.value = queryValue;
    // Function to execute the search
    lunr_search(queryValue);
  }
</script>
