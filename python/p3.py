def color_nodes(graph):
    color_names = ['Green', 'White',  'Red',
                   'Yellow', 'Orange','Black']
    color_map = {}
    sorted_nodes = sorted(graph, key=lambda x: len(graph[x]), reverse=True)

    for node in sorted_nodes:
        neighbor_colors = set(color_map.get(neigh) for neigh in graph[node])
        available_colors = [color for color in range(
            len(graph)) if color not in neighbor_colors]
        color_map[node] = available_colors[0]

    print("Vertex\tColor")
    for vertex, color in color_map.items():
        print(vertex + "\t" + color_names[color])

graph = {
    'a': list('bc'), 'b': list('acde'), 'c': list('abdf'), 'd': list('bcef'),
   'e':list('bdfg'), 'f': list('cdeg'), 'g': list('ef'),
}
color_nodes(graph)