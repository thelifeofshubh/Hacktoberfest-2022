### shresth sharma
Photo:https://www.instagram.com/p/CXf0UzgFMkz/
Location:India
Github:https://github.com/dextersherry/


<!--bfs algo  -->

#include<bits/stdc++.h>
using namespace std;


class Graph
{
	int V; // No. of vertices

	
	vector<list<int>> adj;
public:
	Graph(int V); // Constructor

	
	void addEdge(int v, int w);

	
	void BFS(int s);
};

Graph::Graph(int V)
{
	this->V = V;
	adj.resize(V);
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); 
}

void Graph::BFS(int s)
{
	
	vector<bool> visited;
	visited.resize(V,false);

	
	list<int> queue;

	
	visited[s] = true;
	queue.push_back(s);

	while(!queue.empty())
	{
		
		s = queue.front();
		cout << s << " ";
		queue.pop_front();

		for (auto adjecent: adj[s])
		{
			if (!visited[adjecent])
			{
				visited[adjecent] = true;
				queue.push_back(adjecent);
			}
		}
	}
}


int main()
{
	
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

	cout << "Following is Breadth First Traversal "
		<< "(starting from vertex 2) \n";
	g.BFS(2);

	return 0;
}

            <h3>My Dog</h3>
            <img src="https://images.unsplash.com/photo-1507146426996-ef05306b995a?ixlib=rb-1.2.1&ixid=eyJhcHBfaWQiOjEyMDd9&auto=format&fit=crop&w=2100&q=80" alt="doggy" />
            <p>Lorem, ipsum dolor sit amet consectetur adipisicing elit. Sit libero deleniti rerum quo, incidunt vel consequatur culpa ullam. Magnam facere earum unde harum. Ea culpa veritatis magnam at aliquid. Perferendis totam placeat molestias illo laudantium?
                Minus id minima doloribus dolorum fugit deserunt qui vero voluptas, ut quia cum amet temporibus veniam ad ea ab perspiciatis, enim accusamus asperiores explicabo provident. Voluptates sint, neque fuga cum illum, tempore autem maxime similique
                laborum odio, magnam esse. Aperiam?</p>
        </div>
    </div>

    <nav>
        <ul>
            <li><i class="fas fa-home"></i><a href="#"> Home</a></li>
            <li><i class="fas fa-user-alt"></i><a href="#"> About</a></li>
            <li><i class="fas fa-envelope"></i><a href="#"> Contact</a></li>
        </ul>
    </nav>
    <script src="app.js"></script>
</body>

</html>

@import url('https://fonts.googleapis.com/css?family=Lato&display=swap');
* {
    box-sizing: border-box;
}

body {
    font-family: 'Lato', sans-serif;
    background-color: #333;
    color: #222;
    overflow-x: hidden;
    margin: 0;
}

.container {
    background-color: #fafafa;
    transform-origin: top left;
    transition: transform 0.5s linear;
    width: 100vw;
    min-height: 100vh;
    padding: 50px;
}

.container.show-nav {
    transform: rotate(-20deg);
}

.circle-container {
    position: fixed;
    top: -100px;
    left: -100px;
}

.circle {
    background-color: #ffd60a;
    height: 200px;
    width: 200px;
    border-radius: 50%;
    position: relative;
    transition: transform 0.5s linear;
}

.container.show-nav .circle {
    transform: rotate(-70deg);
}

.circle button {
    cursor: pointer;
    position: absolute;
    top: 50%;
    left: 50%;
    height: 100px;
    background: transparent;
    border: 0;
    font-size: 26px;
    color: #fff;
}

.circle button:focus {
    outline: none;
}

.circle button#open {
    left: 60%;
}

.circle button#close {
    top: 60%;
    transform: rotate(90deg);
    transform-origin: top left;
}

.container.show-nav+nav li {
    transform: translateX(0);
    transition-delay: 0.3s;
}

nav {
    position: fixed;
    bottom: 40px;
    left: 0;
    z-index: 100;
}

nav ul {
    list-style-type: none;
    padding-left: 30px;
}

nav ul li {
    text-transform: uppercase;
    color: #fff;
    margin: 40px 0;
    transform: translateX(-100%);
    transition: transform 0.4s ease-in;
}

nav ul li i {
    font-size: 20px;
    margin-right: 10px;
}

nav ul li+li {
    margin-left: 15px;
    transform: translateX(-150%);
}

nav ul li+li+li {
    margin-left: 30px;
    transform: translateX(-200%);
}

nav a {
    color: #fafafa;
    text-decoration: none;
    transition: all 0.5s;
}

nav a:hover {
    color: #ffd60a;
    font-weight: bold;
}

.content img {
    max-width: 100%;
}

.content {
    max-width: 1000px;
    margin: 50px auto;
}

.content h1 {
    margin: 0;
}

.content small {
    color: #555;
    font-style: italic;
}

.content p {
    color: #333;
    line-height: 1.5;
}



const open = document.getElementById('open')
const close = document.getElementById('close')
const container = document.querySelector('.container')

open.addEventListener('click', () => container.classList.add('show-nav'))

close.addEventListener('click', () => container.classList.remove('show-nav'))
